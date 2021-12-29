// Copyright (c) 2021 The Dogecoin Core developers
// Copyright (c) 2021 The BOKKCOIN Core developer(s)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "amount.h"
#include "chain.h"
#include "chainparams.h"

#ifdef ENABLE_WALLET
CFeeRate GetBokkcoinWalletFeeRate();
CAmount GetBokkcoinMinWalletFee(unsigned int nBytes_);
#endif
CAmount GetBokkcoinMinRelayFee(const CTransaction& tx, unsigned int nBytes, bool fAllowFree);
CAmount GetBokkcoinDustFee(const std::vector<CTxOut> &vout, CFeeRate &baseFeeRate);
