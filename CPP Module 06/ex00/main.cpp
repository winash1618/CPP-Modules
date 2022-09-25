/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 09:12:32 by mkaruvan          #+#    #+#             */
/*   Updated: 2022/09/14 19:10:22 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Command Not Formatted Well" << std::endl
      << "./main [ Input ]" << std::endl;
  } else {
    std::cout << Convert(argv[1]);
  }
  return 0;
}