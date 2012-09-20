// @@@LICENSE
//
//      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#ifndef RFC3501PARSEEXCEPTION_H_
#define RFC3501PARSEEXCEPTION_H_

#include "exceptions/MailException.h"

class Rfc3501ParseException : public MailException
{
public:
	Rfc3501ParseException(const char* msg, const char* filename, int line);
	virtual ~Rfc3501ParseException() throw() {};
};

#endif /*RFC3501PARSEEXCEPTION_H_*/