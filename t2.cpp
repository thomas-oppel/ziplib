//============================================================================
// Name        : t2.cpp
// Author      : agto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ZipFile.h"
using namespace std;

int main() {
	const char* zipFilename = "archive.zip";
	ZipFile::AddFile(zipFilename, "file.txt");

	// there is no need to create folders in the archive separately, because they are part of the filename
	ZipFile::AddEncryptedFile(zipFilename, "file.txt", "destination/in/archive.txt", "password");

	ZipFile::ExtractFile(zipFilename, "file.txt", "newFileOnDisk.txt");

	//ZipFile::ExtractEncryptedFile(zipFilename, "destination/in/archive.txt", "encrypted.txt", "password");

	// because folders are part of the filename (until they are not created separately),
	// the "destination" and "in" folders are deleted too
	//ZipFile::RemoveEntry(zipFilename, "destination/in/archive.txt");
	return 0;
}
