#pragma once
#include <cstdint>

class Memory
{
	public:
		//Constructor
		Memory(int size, int read_time, int write_time);
		//Destructor
		~Memory();

		//Accessors
		void read(unit16_t address, int size);
		unit16_t read_valid();
		bool ready(void);

		//Mutators
		void write(unit16_t address, int size, unit16_t data);
	private:
		unit8_t * memptr;
		unit6_t rdata;
		int read_access_time;
		int write_access_time;
};
