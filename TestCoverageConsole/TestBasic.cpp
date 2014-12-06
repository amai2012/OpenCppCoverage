// OpenCppCoverage is an open source code coverage for C++.
// Copyright (C) 2014 OpenCppCoverage
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#include "TestBasic.hpp"

// We cannot move this code in the header, because the tests will not work in
// release mode. (This project has no optmisation in release mode).
namespace TestCoverageConsole
{
	//-------------------------------------------------------------------------
	void TestBasic()
	{
		if (false)
		{
			int answer = 42;
		}
	}

	//-------------------------------------------------------------------------
	boost::filesystem::path GetTestBasicPath()
	{
		return __FILE__;
	}
}