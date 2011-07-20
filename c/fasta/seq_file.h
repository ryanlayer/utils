#ifndef __SEQ_FILE_H__
#define __SEQ_FILE_H__
#include <string>
#include <fstream>
using namespace std;

class seq_file {

public:
	seq_file(string file_name, size_t line_len);
	~seq_file();
	string get_seq(int start, int end);
private:
	string trim(string str, int most_breaks);
	char *buffer;
	ifstream is;
	int data_start;
	size_t len;
};

#endif
