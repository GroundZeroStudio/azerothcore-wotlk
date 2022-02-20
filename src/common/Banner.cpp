/*
 * Copyright (C) 2016+     AzerothCore <www.azerothcore.org>, released under GNU GPL v3 license, you may redistribute it and/or modify it under version 2 of the License, or (at your option), any later version.
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
