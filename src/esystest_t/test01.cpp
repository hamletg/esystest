/*!
 * \file esystest_t/test01.cpp
 * \brief
 *
 * \cond
 * __legal_b__
 *
 * Copyright (c) 2015-2016 Michel Gillet
 * Distributed under the wxWindows Library Licence, Version 3.1.
 * (See accompanying file LICENSE_3_1.txt or
 * copy at http://www.wxwidgets.org/about/licence)
 *
 * __legal_e__
 * \endcond
 *
 */

#include "esystest_t/esystest_t_prec.h"
#include <esys/inttypes.h>

class GlobalInit
{
public:
	GlobalInit();
	~GlobalInit();
	int m_count;
};

GlobalInit::GlobalInit() : m_count(0)
{
	m_count++;
}

GlobalInit::~GlobalInit()
{
}

BOOST_GLOBAL_FIXTURE(GlobalInit);

BOOST_AUTO_TEST_CASE(Test01)
{
	int32_t result;

	result = 0;
	BOOST_REQUIRE_EQUAL(0, result);	

	BOOST_REQUIRE_NE(1, result);

	BOOST_REQUIRE_LT(-1, result);
	
}