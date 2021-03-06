/*!
 * \file esystest/types.h
 * \brief
 *
 * \cond
 *__legal_b__
 *
 * Copyright (c) 2015-2016 Michel Gillet
 * Distributed under the wxWindows Library Licence, Version 3.1.
 * (See accompanying file LICENSE_3_1.txt or
 * copy at http://www.wxwidgets.org/about/licence)
 *
 *__legal_e__
 * \endcond
 *
 */

#ifndef __ESYSTEST_TYPES_H__
#define __ESYSTEST_TYPES_H__

#include "esystest/esystest_defs.h"

namespace esystest
{

class ESYSTEST_API TestCaseInfo;

struct nil_t {};

}

ESYSTEST_API esystest::TestCaseInfo &operator*(esystest::TestCaseInfo& info, const esystest::nil_t &n);

#endif
