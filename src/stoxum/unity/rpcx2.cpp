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

#include <stoxum/rpc/handlers/PathFind.cpp>
#include <stoxum/rpc/handlers/PayChanClaim.cpp>
#include <stoxum/rpc/handlers/Peers.cpp>
#include <stoxum/rpc/handlers/Ping.cpp>
#include <stoxum/rpc/handlers/Print.cpp>
#include <stoxum/rpc/handlers/Random.cpp>
#include <stoxum/rpc/handlers/RipplePathFind.cpp>
#include <stoxum/rpc/handlers/ServerInfo.cpp>
#include <stoxum/rpc/handlers/ServerState.cpp>
#include <stoxum/rpc/handlers/SignFor.cpp>
#include <stoxum/rpc/handlers/SignHandler.cpp>
#include <stoxum/rpc/handlers/Stop.cpp>
#include <stoxum/rpc/handlers/Submit.cpp>
#include <stoxum/rpc/handlers/SubmitMultiSigned.cpp>
#include <stoxum/rpc/handlers/Subscribe.cpp>
#include <stoxum/rpc/handlers/TransactionEntry.cpp>
#include <stoxum/rpc/handlers/Tx.cpp>
#include <stoxum/rpc/handlers/TxHistory.cpp>
#include <stoxum/rpc/handlers/UnlList.cpp>
#include <stoxum/rpc/handlers/Unsubscribe.cpp>
#include <stoxum/rpc/handlers/ValidationCreate.cpp>
#include <stoxum/rpc/handlers/ValidationSeed.cpp>
#include <stoxum/rpc/handlers/Validators.cpp>
#include <stoxum/rpc/handlers/ValidatorListSites.cpp>
#include <stoxum/rpc/handlers/WalletPropose.cpp>

#include <stoxum/rpc/impl/Handler.cpp>
#include <stoxum/rpc/impl/LegacyPathFind.cpp>
#include <stoxum/rpc/impl/Role.cpp>
#include <stoxum/rpc/impl/RPCHandler.cpp>
#include <stoxum/rpc/impl/RPCHelpers.cpp>
#include <stoxum/rpc/impl/ServerHandlerImp.cpp>
#include <stoxum/rpc/impl/Status.cpp>
#include <stoxum/rpc/impl/TransactionSign.cpp>


