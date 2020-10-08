/**
 * The Forgotten Server - a free and open-source MMORPG server emulator
 * Copyright (C) 2020  Mark Samman <mark.samman@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef FS_FEATURES_H_9F034B63948763D489F944319C2EB3DE
#define FS_FEATURES_H_9F034B63948763D489F944319C2EB3DE

#include "definitions.h"

#if CLIENT_VERSION >= 770
#define GAME_FEATURE_XTEA 1
#define GAME_FEATURE_RSA1024 1
#define GAME_FEATURE_MESSAGE_STATEMENT 1
#define GAME_FEATURE_LOOKTYPE_U16 1
#endif

#if CLIENT_VERSION >= 780
#define GAME_FEATURE_NEWFLUIDS 1
#define GAME_FEATURE_MESSAGE_LEVEL 1
#define GAME_FEATURE_PLAYERICONS_U16 1
#define GAME_FEATURE_ADDONS 1
#define GAME_FEATURE_STAMINA 1
#define GAME_FEATURE_OUTFITS 1
#endif

#if CLIENT_VERSION >= 790
#define GAME_FEATURE_WRITABLE_DATE 1
#endif

#if CLIENT_VERSION >= 820
#define GAME_FEATURE_NPC_INTERFACE 1
#endif

#if CLIENT_VERSION >= 830
#define GAME_FEATURE_ADLER32_CHECKSUM 1
#define GAME_FEATURE_ACCOUNT_NAME 1
#endif

#if CLIENT_VERSION >= 840
#define GAME_FEATURE_DOUBLE_CAPACITY 1
#define GAME_FEATURE_SERVER_SENDFIRST 1
#endif

#if CLIENT_VERSION >= 841
#define GAME_FEATURE_TILE_ADDTHING_STACKPOS 1
#endif

#if CLIENT_VERSION >= 854
#define GAME_FEATURE_GUILD_EMBLEM 1
#define GAME_FEATURE_SERVER_LOG_DETAILS 1
#endif

#if CLIENT_VERSION >= 860
#define GAME_FEATURE_ATTACK_SEQUENCE 1
#endif

#if CLIENT_VERSION >= 862
#define GAME_FEATURE_DEATH_PENALTY 1
#endif

#if CLIENT_VERSION >= 870
#define GAME_FEATURE_MOUNTS 1
#define GAME_FEATURE_DOUBLE_EXPERIENCE 1
#define GAME_FEATURE_SPELL_LIST 1
#endif

#if CLIENT_VERSION >= 900
#define GAME_FEATURE_INVENTORY_LIST 1
#endif

#if CLIENT_VERSION >= 910
#define GAME_FEATURE_TOTAL_CAPACITY 1
#define GAME_FEATURE_BASE_SKILLS 1
#define GAME_FEATURE_CHAT_PLAYERLIST 1
#define GAME_FEATURE_REGENERATION_TIME 1
#define GAME_FEATURE_ITEM_ANIMATION_PHASES 1
#define GAME_FEATURE_ENVIRONMENT_EFFECTS 1
#define GAME_FEATURE_NPC_NAME_ON_TRADE 1
#endif

#if CLIENT_VERSION >= 940
#define GAME_FEATURE_MARKET 1
#endif

#if CLIENT_VERSION >= 953
#define GAME_FEATURE_PING 1
#endif

#if CLIENT_VERSION >= 953 && CLIENT_VERSION < 1080
#define GAME_FEATURE_PURSE_SLOT 1
#endif

#if CLIENT_VERSION >= 960
#define GAME_FEATURE_OFFLINE_TRAINING 1
#endif

#if CLIENT_VERSION >= 961
#define GAME_FEATURE_LOOKATCREATURE 1
#endif

#if CLIENT_VERSION >= 963
#define GAME_FEATURE_ADDITIONAL_VIPINFO 1
#endif

#if CLIENT_VERSION >= 971
#define GAME_FEATURE_PREVIEW_STATE 1
#define GAME_FEATURE_CLIENT_VERSION 1
#endif

#if CLIENT_VERSION >= 980
#define GAME_FEATURE_KEEP_CONNECTION_AFTER_DEATH 1
#endif

#if CLIENT_VERSION >= 980
#define GAME_FEATURE_LOGIN_PENDING 1
#define GAME_FEATURE_VIP_STATUS 1
#define GAME_FEATURE_NEWSPEED_LAW 1
#endif

#if CLIENT_VERSION >= 984
#define GAME_FEATURE_BROWSEFIELD 1
#define GAME_FEATURE_CONTAINER_PAGINATION 1
#endif

#if CLIENT_VERSION >= 1000
#define GAME_FEATURE_PVP_MODE 1
#define GAME_FEATURE_ITEM_MARK 1
#define GAME_FEATURE_CREATURE_MARK 1
#define GAME_FEATURE_CREATURE_TYPE 1
#endif

#if CLIENT_VERSION >= 1012
#define GAME_FEATURE_LOGIN_EXTENDED 1
#endif

#if CLIENT_VERSION >= 1035
#define GAME_FEATURE_DOUBLE_SKILLS 1
#endif

#if CLIENT_VERSION >= 1036
#define GAME_FEATURE_CREATURE_ICONS 1
#endif

#if CLIENT_VERSION >= 1038
#define GAME_FEATURE_PREMIUM_EXPIRATION 1
#endif

#if CLIENT_VERSION >= 1053
#define GAME_FEATURE_UNJUSTIFIED_POINTS 1
#endif

#if CLIENT_VERSION >= 1054
#define GAME_FEATURE_EXPERIENCE_BONUS 1
#endif

#if CLIENT_VERSION >= 1055
#define GAME_FEATURE_DEATH_TYPE 1
#endif

#if CLIENT_VERSION >= 1061
#define GAME_FEATURE_RENDER_INFORMATION 1
#endif

#if CLIENT_VERSION >= 1071
#define GAME_FEATURE_CONTENT_REVISION 1
#endif

#if CLIENT_VERSION >= 1072
#define GAME_FEATURE_AUTHENTICATOR 1
#endif

#if CLIENT_VERSION >= 1074
#define GAME_FEATURE_SESSIONKEY 1
#endif

#if CLIENT_VERSION >= 1076
#define GAME_FEATURE_EQUIP_HOTKEY 1
#endif

#if CLIENT_VERSION >= 1080
#define GAME_FEATURE_STORE 1
#define GAME_FEATURE_LOGIN_PREMIUM_TIMESTAMP 1
#endif

#if CLIENT_VERSION >= 1082
#define GAME_FEATURE_LOGIN_PREMIUM_TYPE 1
#endif

#if CLIENT_VERSION >= 1092
#define GAME_FEATURE_WRAPPABLE 1
#define GAME_FEATURE_STORE_INBOX 1
#define GAME_FEATURE_STORE_SERVICETYPE 1
#endif

#if CLIENT_VERSION >= 1093
#define GAME_FEATURE_STORE_HIGHLIGHTS 1
#endif

#if CLIENT_VERSION >= 1094
#define GAME_FEATURE_ADDITIONAL_SKILLS 1
#endif

#if CLIENT_VERSION >= 1097
#define GAME_FEATURE_DETAILED_EXPERIENCE_BONUS 1
#define GAME_FEATURE_STORE_HIGHLIGHTS2 1
#endif

#if CLIENT_VERSION >= 1102
#define GAME_FEATURE_CLIENT_SENDSERVERNAME 1
#define GAME_FEATURE_PREY 1
#define GAME_FEATURE_IMBUING 1
#endif

#if CLIENT_VERSION >= 1110
#define GAME_FEATURE_VIP_GROUPS 1
#define GAME_FEATURE_INSPECTION 1
#endif

#if CLIENT_VERSION >= 1111
#undef GAME_FEATURE_ADLER32_CHECKSUM
#define GAME_FEATURE_PROTOCOLSEQUENCE 1
#endif

#if CLIENT_VERSION >= 1121
#define GAME_FEATURE_BLESS_DIALOG 1
#define GAME_FEATURE_QUEST_TRACKER 1
#endif

#if CLIENT_VERSION >= 1130
#define GAME_FEATURE_GAMETIME 1
#endif

#if CLIENT_VERSION >= 1132
#define GAME_FEATURE_COMPEDIUM 1
#endif

#if CLIENT_VERSION >= 1140
#undef GAME_FEATURE_PLAYERICONS_U16
#define GAME_FEATURE_PLAYERICONS_U32 1
#define GAME_FEATURE_REWARD_WALL 1
#define GAME_FEATURE_ANALYTICS 1
#endif

#if CLIENT_VERSION >= 1150
#define GAME_FEATURE_QUICK_LOOT 1
#define GAME_FEATURE_EXTENDED_CAPACITY 1
#define GAME_FEATURE_CYCLOPEDIA_MONSTERS 1
#endif

#if CLIENT_VERSION >= 1180
#define GAME_FEATURE_STASH 1
#define GAME_FEATURE_CYCLOPEDIA_MAPANDDETAILS 1
#endif

#if CLIENT_VERSION >= 1185
#undef GAME_FEATURE_ENVIRONMENT_EFFECTS
#undef GAME_FEATURE_ITEM_MARK
#endif

#if CLIENT_VERSION >= 1200
#define GAME_FEATURE_DOUBLE_PERCENT_SKILLS 1
#endif

#if CLIENT_VERSION >= 1215
#define GAME_FEATURE_TOURNAMENTS 1
#endif

#if CLIENT_VERSION >= 1220
#define GAME_FEATURE_PARTY_LIST 1
#define GAME_FEATURE_PLAYER_VOCATIONS 1
#endif

#if CLIENT_VERSION >= 1240
#define GAME_FEATURE_HIGHSCORES 1
#endif

//robinhood hash map is faster variant of hash map than std::unordered_map but it depends on std::unordered_map implementation
//compared with visual studio stl library it is at least 2x faster
#define GAME_FEATURE_ROBINHOOD_HASH_MAP 0

//Xiaolin Wu's line algorithm for isSightClear - it seems cipsoft use this algorithm or at least something very similar
//if disabled it'll fallback to Bresenham's line algorithm
#define GAME_FEATURE_XIAOLIN_WU_SIGHT_CLEAR 1

#endif
