#include "../header/io.h"


int main(int argc, char * argv[])
{
	if(argc < NUM_ARGS)
	{
		print(ERROR_INPUT);
		return -1;
	}

	read_file(argv[INPUT]);

	return 0;
}
