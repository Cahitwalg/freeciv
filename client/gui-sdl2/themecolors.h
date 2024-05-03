/***********************************************************************
 Freeciv - Copyright (C) 2005 - The Freeciv Project
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifndef FC__THEMECOLORS_H
#define FC__THEMECOLORS_H

/* client */
#include "colors_common.h"

/* The color system is designed on the assumption that almost, but
 * not quite, all displays will be truecolor. */

enum theme_color {
  COLOR_THEME_BACKGROUND,
  COLOR_THEME_CHECKBOX_LABEL_TEXT,
  COLOR_THEME_CUSTOM_WIDGET_NORMAL_TEXT,
  COLOR_THEME_CUSTOM_WIDGET_SELECTED_FRAME,
  COLOR_THEME_CUSTOM_WIDGET_SELECTED_TEXT,
  COLOR_THEME_CUSTOM_WIDGET_PRESSED_FRAME,
  COLOR_THEME_CUSTOM_WIDGET_PRESSED_TEXT,
  COLOR_THEME_CUSTOM_WIDGET_DISABLED_TEXT,
  COLOR_THEME_EDITFIELD_CARET,
  COLOR_THEME_LABEL_BAR,
  COLOR_THEME_QUICK_INFO_BG,        /* Quick info Background color */
  COLOR_THEME_QUICK_INFO_FRAME,     /* Quick info frame color */
  COLOR_THEME_QUICK_INFO_TEXT,      /* Quick info Text color */
  COLOR_THEME_SELECTIONRECTANGLE,
  COLOR_THEME_TEXT,
  COLOR_THEME_THEMELABEL2_BG,
  COLOR_THEME_WIDGET_NORMAL_TEXT,   /* Currently not used */
  COLOR_THEME_WIDGET_SELECTED_TEXT, /* Currently not used */
  COLOR_THEME_WIDGET_PRESSED_TEXT,  /* Currently not used */
  COLOR_THEME_WIDGET_DISABLED_TEXT, /* Text on disabled widgets */
  COLOR_THEME_WINDOW_TITLEBAR_SEPARATOR,

  COLOR_THEME_ADVANCEDTERRAINDLG_TEXT,
  COLOR_THEME_CITYDLG_BUY,
  COLOR_THEME_CITYDLG_CELEB,        /* City celebrating color */
  COLOR_THEME_CITYDLG_CORRUPTION,
  COLOR_THEME_CITYDLG_FOODPERTURN,
  COLOR_THEME_CITYDLG_FOODSTOCK,
  COLOR_THEME_CITYDLG_FOOD_SURPLUS, /* City food surplus color */
  COLOR_THEME_CITYDLG_FRAME,
  COLOR_THEME_CITYDLG_GOLD,         /* City gold color */
  COLOR_THEME_CITYDLG_GRANARY,
  COLOR_THEME_CITYDLG_GROWTH,
  COLOR_THEME_CITYDLG_HAPPY,        /* City happy color */
  COLOR_THEME_CITYDLG_IMPR,         /* City improvements */
  COLOR_THEME_CITYDLG_INFOPANEL,
  COLOR_THEME_CITYDLG_LUX,          /* City luxuries color */
  COLOR_THEME_CITYDLG_PANEL,
  COLOR_THEME_CITYDLG_PROD,         /* City production color */
  COLOR_THEME_CITYDLG_SCIENCE,      /* City science color */
  COLOR_THEME_CITYDLG_SELL,
  COLOR_THEME_CITYDLG_SHIELDSTOCK,
  COLOR_THEME_CITYDLG_STOCKS,
  COLOR_THEME_CITYDLG_SUPPORT,      /* City units support color */
  COLOR_THEME_CITYDLG_TRADE,        /* City trade color */
  COLOR_THEME_CITYDLG_UPKEEP,       /* City upkeep color */
  COLOR_THEME_CITYREP_FOODSTOCK,
  COLOR_THEME_CITYREP_FRAME,
  COLOR_THEME_CITYREP_PROD,
  COLOR_THEME_CITYREP_TEXT,
  COLOR_THEME_CITYREP_TRADE,
  COLOR_THEME_CMA_FRAME,
  COLOR_THEME_CMA_TEXT,
  COLOR_THEME_CONNECTDLG_FRAME,
  COLOR_THEME_CONNECTDLG_INNERFRAME,
  COLOR_THEME_CONNECTDLG_LABELFRAME,
  COLOR_THEME_CONNLISTDLG_FRAME,
  COLOR_THEME_DIPLODLG_MEETING_HEADING_TEXT,
  COLOR_THEME_DIPLODLG_MEETING_TEXT,
  COLOR_THEME_DIPLODLG_TEXT,
  COLOR_THEME_ECONOMYDLG_FRAME,
  COLOR_THEME_ECONOMYDLG_NEG_TEXT,
  COLOR_THEME_ECONOMYDLG_TEXT,
  COLOR_THEME_HELPDLG_FRAME,
  COLOR_THEME_HELPDLG_LINE,
  COLOR_THEME_HELPDLG_LINE2,
  COLOR_THEME_HELPDLG_LINE3,
  COLOR_THEME_HELPDLG_TEXT,
  COLOR_THEME_JOINGAMEDLG_FRAME,
  COLOR_THEME_JOINGAMEDLG_TEXT,
  COLOR_THEME_MAPVIEW_INFO_FRAME,
  COLOR_THEME_MAPVIEW_INFO_TEXT,
  COLOR_THEME_MAPVIEW_UNITINFO_TEXT,
  COLOR_THEME_MAPVIEW_UNITINFO_VETERAN_TEXT,
  COLOR_THEME_MESWIN_ACTIVE_TEXT,
  COLOR_THEME_MESWIN_ACTIVE_TEXT2,
  COLOR_THEME_MESWIN_FRAME,
  COLOR_THEME_NATIONDLG_FRAME,
  COLOR_THEME_NATIONDLG_LEGEND,
  COLOR_THEME_NATIONDLG_TEXT,
  COLOR_THEME_NEWCITYDLG_TEXT,
  COLOR_THEME_OPTIONDLG_WORKLISTLIST_FRAME,
  COLOR_THEME_OPTIONDLG_WORKLISTLIST_TEXT,
  COLOR_THEME_PLRDLG_ALLIANCE,
  COLOR_THEME_PLRDLG_ARMISTICE,
  COLOR_THEME_PLRDLG_CEASEFIRE,
  COLOR_THEME_PLRDLG_FRAME,
  COLOR_THEME_PLRDLG_PEACE,
  COLOR_THEME_PLRDLG_TEXT,
  COLOR_THEME_PLRDLG_WAR,
  COLOR_THEME_PLRDLG_WAR_RESTRICTED, /* Player at war but can't meet
                                      * or get intel. data */
  COLOR_THEME_PLRDLG_NO_CONTACT,
  COLOR_THEME_REVOLUTIONDLG_TEXT,
  COLOR_THEME_SABOTAGEDLG_SEPARATOR,
  COLOR_THEME_SCIENCEDLG_FRAME,
  COLOR_THEME_SCIENCEDLG_MED_TECHICON_BG,
  COLOR_THEME_SCIENCEDLG_TEXT,
  COLOR_THEME_SELLIMPR_TEXT,
  COLOR_THEME_UNITSREP_FRAME,
  COLOR_THEME_UNITSREP_TEXT,
  COLOR_THEME_UNITUPGRADE_TEXT,
  COLOR_THEME_UNITDISBAND_TEXT,
  COLOR_THEME_USERPASSWDDLG_FRAME,
  COLOR_THEME_USERPASSWDDLG_TEXT,
  COLOR_THEME_WARDLG_TEXT,
  COLOR_THEME_WLDLG_FRAME,

  COLOR_THEME_LAST
};

struct color;
struct theme_color_system;
struct theme;

struct color *theme_get_color(const struct theme *t, enum theme_color color);

/* Functions used by the theme to allocate the color system. */
struct theme_color_system *theme_color_system_read(struct section_file *file);

void theme_color_system_free(struct theme_color_system *colors);

#endif /* FC__THEMECOLORS_H */
