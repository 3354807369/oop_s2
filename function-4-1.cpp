#include <iostream>
#include "function-4-1.h"
using namespace std;
BusCounter::BusCounter(int cap)
{
	BusCounter::bus_count = 0;
	capacity = cap;
}
void BusCounter::passenger_board() {
	if (bus_count < capacity)
		bus_count++;
}
void BusCounter::passenger_exit() {
	if (bus_count > 0)
		bus_count--;
}
int BusCounter::get_count() {
	return bus_count;
}
