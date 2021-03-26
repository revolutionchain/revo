// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_GUICONSTANTS_H
#define BITCOIN_QT_GUICONSTANTS_H

#include <cstdint>

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 2000;

/* AskPassphraseDialog -- Maximum passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* BitcoinGUI -- Size of icons in status bar */
static const int STATUSBAR_ICONSIZE = 16;

static const bool DEFAULT_SPLASHSCREEN = true;


/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(128, 128, 128)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(255, 255, 255)
/* Transaction list -- bare address (without label) */
#define COLOR_BAREADDRESS QColor(140, 140, 140)
/* Transaction list -- TX status decoration - open until date */
#define COLOR_TX_STATUS_OPENUNTILDATE QColor(64, 64, 255)
/* Transaction list -- TX status decoration - danger, tx needs attention */
#define COLOR_TX_STATUS_DANGER QColor(200, 100, 100)
/* Transaction list -- TX status decoration - default color */
#define COLOR_BLACK QColor(0, 0, 0)

// Number of different confirmation icons
#define CONFIRM_ICONS 5

/* Tooltips longer than this (in characters) are converted into rich text,
   so that they can be word-wrapped.
 */
static const int TOOLTIP_WRAP_THRESHOLD = 80;

/* Number of frames in spinner animation */
#define SPINNER_FRAMES 36

#define QAPP_ORG_NAME "Revo"
#define QAPP_ORG_DOMAIN "revo.org"
#define QAPP_APP_NAME_DEFAULT "Revo-Qt"
#define QAPP_APP_NAME_TESTNET "Revo-Qt-testnet"
#define QAPP_APP_NAME_REGTEST "Revo-Qt-regtest"

/* One gigabyte (GB) in bytes */
static constexpr uint64_t GB_BYTES{1000000000};

// Default prune target displayed in GUI.
static constexpr int DEFAULT_PRUNE_TARGET_GB{2};

/* Mainnet revo explorer uri */
#define REVO_INFO_MAINNET "<a href='https://explorer.revo.network/%1/%2'>%2</a>"

/* Testnet revo explorer uri */
#define REVO_INFO_TESTNET "<a href='https://testnet.revo.network/%1/%2'>%2</a>"

#endif // BITCOIN_QT_GUICONSTANTS_H
