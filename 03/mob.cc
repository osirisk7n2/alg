#include <string>
#include <fstream>
#include <iostream>

bool charReading(std::ifstream &, char & );
bool fileReading(std::string );


int main() {
  if(fileReading("in.txt"))
      std::cout << "plik wczytano!" << std::endl;
    
  return 0;
}


bool charReading( std::ifstream & plik, char & c ) {
  plik.clear(); 
  plik >> c;
  
  if( plik.bad() )    {
    std::cout << "blad sprzetowy!" << std::endl;
    plik.close();
    return false;
  } else
    if( plik.fail() )    {
      std::cout << "nie wczytano znaku!" << std::endl;
      return false;
    } 
  
  return true;
}

bool fileReading( std::string fname )
{
  std::ifstream plik;
  plik.open( fname.c_str() );
  if( !plik.good() )
    {
      std::cout << "pliku nie otworzono" << std::endl;
      return false;
    } 
  while( !plik.eof() ) {
    char c;
    if( !charReading( plik, c ) )
      if( plik.bad() )
	return false;
      else
	break; 
    std::cout << "napotkany znak = '" << c << "'" << std::endl;
  } 
  plik.close();
  return true;
}
