// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_COINPARAMS_H
#define BITCOIN_COINPARAMS_H

//ports
#define P2PPORT	6532
#define RPCPORT	6531

//block reward and halving
#define COINS_PER_BLOCK	500
#define HALVING_HEIGHT	525600

//difficulty retarget
#define TARGET_TIMESPAN	60 * 30		//30 minutes

//block time
#define TARGET_SPACING	60		//60 second block time

//max number of coins
#define MAX_COINS	530855493	//250 million coins

//blocks before coins become mature
#define MATURITY_BLOCKS	45

//base58 address prefix
#define ADDRESS_PREFIX	25

//confirmations
#define CONFIRMATIONS	5

//for kgw
#define DIFF_FILTER_THRESHOLD_TESTNET	8192
#define DIFF_FILTER_THRESHOLD		8192

#endif

