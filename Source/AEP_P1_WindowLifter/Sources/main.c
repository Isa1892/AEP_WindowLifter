
//Headers for main
#include "Application\Application_headers.h"
#include "Hal\Hal_headers.h"
#include "Mal\Mal_headers.h"

//Main function
int main(void) {

	General_config();
	
	while(1)
	{
		Motion_window();

	}
}



