#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
	int nbAccounts = getNbAccounts();
	int totalAmount = getTotalAmount();
	int nbDeposits = getNbDeposits();
	int nbWithdrawals = getNbWithdrawals();

	_displayTimestamp();
	std::cout << "accounts:" << nbAccounts << ";total:" << totalAmount << ";deposits:" << nbDeposits << ";withdrawals:" << nbWithdrawals << "\n";
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << "\n";
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << "\n";
}

void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
	_totalNbDeposits++;
	_amount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" 
	<< _amount - deposit << ";deposit:" << deposit << ";amount:" 
	<<  _amount << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount > withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
	_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";deposit:" << withdrawal << ";amount:" <<  _amount << ";nb_deposits:" << _nbWithdrawals << "\n";
		return (true);
	}
	else
	{
	_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << "\n";
		return (false);
	}
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(0);                // Get current time
    std::tm* local_time = std::localtime(&now);    // Convert to local time

    std::cout << "[";
    std::cout << (1900 + local_time->tm_year);     // Year
    std::cout << (local_time->tm_mon + 1 < 10 ? "0" : "") << (local_time->tm_mon + 1); // Month
    std::cout << (local_time->tm_mday < 10 ? "0" : "") << local_time->tm_mday;         // Day
    std::cout << "_";
    std::cout << (local_time->tm_hour < 10 ? "0" : "") << local_time->tm_hour;         // Hour
    std::cout << (local_time->tm_min < 10 ? "0" : "") << local_time->tm_min;           // Minutes
    std::cout << (local_time->tm_sec < 10 ? "0" : "") << local_time->tm_sec;           // Seconds
    std::cout << "] ";
}
//p_amount == post amount / 9bl mn deposit or withdrawal