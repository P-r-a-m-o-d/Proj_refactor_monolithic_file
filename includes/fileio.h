#ifndef FILEIO_H_
#define FILEIO_H_
#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"

int load(const std::string filename, std::vector<process> &myProcesses);
int save(const std::string filename, std::vector<process> &myProcesses);

#endif /*FILEIO_H_*/
