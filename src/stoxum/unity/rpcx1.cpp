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

// This has to be included early to prevent an obscure MSVC compile error
#include <boost/asio/deadline_timer.hpp>

#include <stoxum/protocol/JsonFields.h>
#include <stoxum/rpc/RPCHandler.h>
#include <stoxum/rpc/handlers/Handlers.h>

#include <stoxum/rpc/handlers/AccountCurrenciesHandler.cpp>
#include <stoxum/rpc/handlers/AccountInfo.cpp>
#include <stoxum/rpc/handlers/AccountLines.cpp>
#include <stoxum/rpc/handlers/AccountChannels.cpp>
#include <stoxum/rpc/handlers/AccountObjects.cpp>
#include <stoxum/rpc/handlers/AccountOffers.cpp>
#include <stoxum/rpc/handlers/AccountTx.cpp>
#include <stoxum/rpc/handlers/AccountTxOld.cpp>
#include <stoxum/rpc/handlers/AccountTxSwitch.cpp>
#include <stoxum/rpc/handlers/BlackList.cpp>
#include <stoxum/rpc/handlers/BookOffers.cpp>
#include <stoxum/rpc/handlers/CanDelete.cpp>
#include <stoxum/rpc/handlers/Connect.cpp>
#include <stoxum/rpc/handlers/ConsensusInfo.cpp>
#include <stoxum/rpc/handlers/Feature1.cpp>
#include <stoxum/rpc/handlers/Fee1.cpp>
#include <stoxum/rpc/handlers/FetchInfo.cpp>
#include <stoxum/rpc/handlers/GatewayBalances.cpp>
#include <stoxum/rpc/handlers/GetCounts.cpp>
#include <stoxum/rpc/handlers/LedgerHandler.cpp>
#include <stoxum/rpc/handlers/LedgerAccept.cpp>
#include <stoxum/rpc/handlers/LedgerCleanerHandler.cpp>
#include <stoxum/rpc/handlers/LedgerClosed.cpp>
#include <stoxum/rpc/handlers/LedgerCurrent.cpp>
#include <stoxum/rpc/handlers/LedgerData.cpp>
#include <stoxum/rpc/handlers/LedgerEntry.cpp>
#include <stoxum/rpc/handlers/LedgerHeader.cpp>
#include <stoxum/rpc/handlers/LedgerRequest.cpp>
#include <stoxum/rpc/handlers/LogLevel.cpp>
#include <stoxum/rpc/handlers/LogRotate.cpp>
#include <stoxum/rpc/handlers/NoRippleCheck.cpp>
#include <stoxum/rpc/handlers/OwnerInfo.cpp>
