//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#include <BeastConfig.h>
#include <stoxum/app/misc/LoadFeeTrack.h>
#include <stoxum/core/Config.h>
#include <stoxum/beast/unit_test.h>
#include <stoxum/ledger/ReadView.h>

namespace ripple {

class LoadFeeTrack_test : public beast::unit_test::suite
{
public:
    void run ()
    {
        Config d; // get a default configuration object
        LoadFeeTrack l;
        Fees const fees = [&]()
        {
            Fees f;
            f.base = d.FEE_DEFAULT;
            f.units = d.TRANSACTION_FEE_BASE;
            f.reserve = SYSTEM_CURRENCY_PARTS / 100;
            f.increment = SYSTEM_CURRENCY_PARTS / 500;
            return f;
        }();

        BEAST_EXPECT (scaleFeeLoad (10000, l, fees, false) == 10000);
        BEAST_EXPECT (scaleFeeLoad (1, l, fees, false) == 1);
    }
};

BEAST_DEFINE_TESTSUITE(LoadFeeTrack,ripple_core,ripple);

} // ripple
