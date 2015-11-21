#ifndef _SENTENCE_PATTERN
#define _SENTENCE_PATTERN

#include <list>
#include <string>
#include <fstream>
#include <iostream>
#include "time.h"
using namespace std;
class SentencePattern
{

public:
	SentencePattern(string filename);
	SentencePattern();
	~SentencePattern();
	char * get_pattern();

private:
	list<string> patterns_list;
	string filename;
	bool read_patterns();
	bool save_patterns();
	bool add(string pattern);
	bool change(string new_pattern,string old_pattern);
	bool remove(string pattern);
	
};


#endif