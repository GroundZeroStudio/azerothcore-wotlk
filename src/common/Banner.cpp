/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Banner.h"
#include "GitRevision.h"
#include "StringFormat.h"

void Acore::Banner::Show(std::string_view applicationName, void(*log)(std::string_view text), void(*logExtraInfo)())
{
    log(Acore::StringFormatFmt("{} ({})", GitRevision::GetFullVersion(), applicationName));
    log("<Ctrl-C> to stop.\n");
    //log("   █████╗ ███████╗███████╗██████╗  ██████╗ ████████╗██╗  ██╗");
    //log("  ██╔══██╗╚══███╔╝██╔════╝██╔══██╗██╔═══██╗╚══██╔══╝██║  ██║");
    //log("  ███████║  ███╔╝ █████╗  ██████╔╝██║   ██║   ██║   ███████║");
    //log("  ██╔══██║ ███╔╝  ██╔══╝  ██╔══██╗██║   ██║   ██║   ██╔══██║");
    //log("  ██║  ██║███████╗███████╗██║  ██║╚██████╔╝   ██║   ██║  ██║");
    //log("  ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝ ╚═════╝    ╚═╝   ╚═╝  ╚═╝");
    //log("                                 ██████╗ ██████╗ ██████╗ ███████╗");
    //log("                                ██╔════╝██╔═══██╗██╔══██╗██╔════╝");
    //log("                                ██║     ██║   ██║██████╔╝█████╗");
    //log("                                ██║     ██║   ██║██╔══██╗██╔══╝");
    //log("                                ╚██████╗╚██████╔╝██║  ██║███████╗");
    log("     完全原汁原味仿官方设置,没有花里胡哨,没有变态装备,变态属性和各种乱七八糟的修仙设定\n");
    log("     真正的让你感受最初的那份魔兽味道,适合养老党,休闲党,任务剧情党\n");
    log("     唯一更新QQ群号:924396021\n");
    log("     AI魔兽免费单机版使用最新AZ核心+新npcbot\n");

    if (logExtraInfo)
    {
        logExtraInfo();
    }

    log(" ");
}
