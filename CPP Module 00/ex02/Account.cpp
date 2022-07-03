/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:32:16 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/05/18 15:15:08 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
	
	Account::_totalAmount += initial_deposit;
	this->_amount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_nbAccounts;
	std::cout << ";" << "amount:"<< this->checkAmount();
	std::cout << ";" << "created" << std::endl;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_nbAccounts;
	std::cout << ";" << "amount:"<< this->checkAmount();
	std::cout << ";" << "closed" << std::endl;
	this->_accountIndex = Account::_nbAccounts;
	
}

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << "total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++; 
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";" << "p_amount:"<< this->checkAmount();
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";" << "amount:"<< this->checkAmount();
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_totalNbWithdrawals++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";" << "p_amount:"<< this->checkAmount();
	std::cout << ";withdrawal:";
	if(withdrawal <= this->_amount)
	{
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		std::cout  << withdrawal << ";" << "amount:"<< this->checkAmount();
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "refused" <<std::endl;
		return (false);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";" << "amount:"<< this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	std::cout <<"[";
	std::cout << 1900 + local_time->tm_year;
	std::cout << 1 + local_time->tm_mon;
	std::cout << local_time->tm_mday;
	std::cout << "_";
	if (1 + local_time->tm_hour < 10)
		std::cout << "0" << 1 + local_time->tm_hour;
	else
		std::cout << 1 + local_time->tm_hour;
	std::cout << 1 + local_time->tm_min ;
	std::cout << 1 + local_time->tm_sec << "] ";
}