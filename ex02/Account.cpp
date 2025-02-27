/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 05:25:11 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/02/27 06:36:37 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <string>
#include <iostream>

int 	Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp( void )
{
    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer[80];

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);

    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer ;
}


Account::Account(int initial_deposit):_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	
}


Account::~Account(void)
{
    std::cout << "index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";closed" << std::endl;
}

void	Account::displayStatus( void ) const
{
    std::cout << "index:" << _accountIndex 
              << ";amount:" << _amount 
              << ";deposits:" << _nbDeposits 
              << ";withdrawals:" << _nbWithdrawals 
              << std::endl;
}



void	Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << _nbAccounts 
              << ";total_amount:" << _totalAmount 
              << ";total_deposits:" << _totalNbDeposits 
              << ";total_withdrawals:" << _totalNbWithdrawals 
              << std::endl;
}


int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}