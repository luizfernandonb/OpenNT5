///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 1999-2001, Microsoft Corp. All rights reserved.
//
// FILE
//
//    datetimemsg.mc
//
// SYNOPSIS
//
//    This f ile defines the messages for the Server project
//
// MODIFICATION HISTORY 
//
//    03/04/1999    Original version. 
//
///////////////////////////////////////////////////////////////////////////////

// please choose one of these severity names as part of your messages
 

// The Facility Name identifies the Alert ID range to be used by
// the specific component. For each new message you add choose the
// facility name corresponding to your component. If none of these
// correspond to your component add a new facility name with a new
// value and name 
///////////////////////////////////////////////////////////////////////////////
//
// 
//
///////////////////////////////////////////////////////////////////////////////
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//
#define SA_FACILITY_DATETIME_TAB         0x2
#define SA_FACILITY_DATETIME_ALERT       0x1


//
// Define the severity codes
//
#define SA_SEVERITY_WARNING              0x2
#define SA_SEVERITY_SUCCESS              0x0
#define SA_SEVERITY_INFORMATIONAL        0x1
#define SA_SEVERITY_ERROR                0x3


//
// MessageId: SA_DATETIME_TASKNAME
//
// MessageText:
//
//  Date and Time Settings
//
#define SA_DATETIME_TASKNAME             0x40010001L

//
// MessageId: SA_DATETIME_TASK_DESC
//
// MessageText:
//
//  Using Set Date and Time, you can set the date and time on the server.
//
#define SA_DATETIME_TASK_DESC            0x40010002L

//
// MessageId: SA_TASKTITLE_TEXT
//
// MessageText:
//
//  Date and Time Settings
//
#define SA_TASKTITLE_TEXT                0x40010003L

//
// MessageId: SA_INVALIDTIME_ERRORMESSAGE
//
// MessageText:
//
//  The time entered is not valid.
//
#define SA_INVALIDTIME_ERRORMESSAGE      0x40010004L

//
// MessageId: SA_INVALIDDATE_ERRORMESSAGE
//
// MessageText:
//
//  The date entered is not valid.
//
#define SA_INVALIDDATE_ERRORMESSAGE      0x40010005L

//
// MessageId: SA_INVALIDDATETIME_ERRORMESSAGE
//
// MessageText:
//
//  The date or time entered is not valid.
//
#define SA_INVALIDDATETIME_ERRORMESSAGE  0x40010006L

//
// MessageId: SA_INVALIDTIMEZONE_ERRORMESSAGE
//
// MessageText:
//
//  The time zone entered is not valid.
//
#define SA_INVALIDTIMEZONE_ERRORMESSAGE  0x40010007L

//
// MessageId: SA_DATETIME_NOTIMPLEMENTED
//
// MessageText:
//
//  Setting date and time not implemented.
//
#define SA_DATETIME_NOTIMPLEMENTED       0x40010008L

//
// MessageId: SA_AUTOMATICDAYLIGHTMESSAGE_TEXT
//
// MessageText:
//
//  Automatically adjust clock for daylight saving changes
//
#define SA_AUTOMATICDAYLIGHTMESSAGE_TEXT 0x40010009L

//
// MessageId: SA_NOTE_LEFT_TEXT
//
// MessageText:
//
//  Note
//
#define SA_NOTE_LEFT_TEXT                0x4001000AL

//
// MessageId: SA_NOTE_DESCRIPTION_TEXT
//
// MessageText:
//
//  Changes to the server's date and time do not affect the date and time on your computer.
//
#define SA_NOTE_DESCRIPTION_TEXT         0x4001000BL

//
// MessageId: SA_YEAR
//
// MessageText:
//
//  Year:
//
#define SA_YEAR                          0x4001000CL

//
// MessageId: SA_MONTH
//
// MessageText:
//
//  Month:
//
#define SA_MONTH                         0x4001000DL

//
// MessageId: SA_DATE
//
// MessageText:
//
//  Date:
//
#define SA_DATE                          0x4001000EL

//
// MessageId: SA_TIME
//
// MessageText:
//
//  Time:
//
#define SA_TIME                          0x4001000FL

//
// MessageId: SA_TIMEZONE
//
// MessageText:
//
//  Time zone:
//
#define SA_TIMEZONE                      0x40010010L

///////////////////////////////////////////////////////////////////////////////
//
//  This was added in the wrong place and broke all the rest of the
//  messages. To prevent having to renumber all the rest of the items
//  we reused the number, which is okay because the severity is different 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_TASKCTX_OBJECT_CREATION_FAIL_ERRORMESSAGE
//
// MessageText:
//
//  Internal error, unable to create taskctx object.
//  
//
#define L_TASKCTX_OBJECT_CREATION_FAIL_ERRORMESSAGE 0xC0010011L

///////////////////////////////////////////////////////////////////////////////
//
//  All the variables for dates 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_DATES_TEXT1
//
// MessageText:
//
//  1
//
#define SA_DATES_TEXT1                   0x40010011L

//
// MessageId: SA_DATES_TEXT2
//
// MessageText:
//
//  2
//
#define SA_DATES_TEXT2                   0x40010012L

//
// MessageId: SA_DATES_TEXT3
//
// MessageText:
//
//  3
//
#define SA_DATES_TEXT3                   0x40010013L

//
// MessageId: SA_DATES_TEXT4
//
// MessageText:
//
//  4
//
#define SA_DATES_TEXT4                   0x40010014L

//
// MessageId: SA_DATES_TEXT5
//
// MessageText:
//
//  5
//
#define SA_DATES_TEXT5                   0x40010015L

//
// MessageId: SA_DATES_TEXT6
//
// MessageText:
//
//  6
//
#define SA_DATES_TEXT6                   0x40010016L

//
// MessageId: SA_DATES_TEXT7
//
// MessageText:
//
//  7
//
#define SA_DATES_TEXT7                   0x40010017L

//
// MessageId: SA_DATES_TEXT8
//
// MessageText:
//
//  8
//
#define SA_DATES_TEXT8                   0x40010018L

//
// MessageId: SA_DATES_TEXT9
//
// MessageText:
//
//  9
//
#define SA_DATES_TEXT9                   0x40010019L

//
// MessageId: SA_DATES_TEXT10
//
// MessageText:
//
//  10
//
#define SA_DATES_TEXT10                  0x4001001AL

//
// MessageId: SA_DATES_TEXT11
//
// MessageText:
//
//  11
//
#define SA_DATES_TEXT11                  0x4001001BL

//
// MessageId: SA_DATES_TEXT12
//
// MessageText:
//
//  12
//
#define SA_DATES_TEXT12                  0x4001001CL

//
// MessageId: SA_DATES_TEXT13
//
// MessageText:
//
//  13
//
#define SA_DATES_TEXT13                  0x4001001DL

//
// MessageId: SA_DATES_TEXT14
//
// MessageText:
//
//  14
//
#define SA_DATES_TEXT14                  0x4001001EL

//
// MessageId: SA_DATES_TEXT15
//
// MessageText:
//
//  15
//
#define SA_DATES_TEXT15                  0x4001001FL

//
// MessageId: SA_DATES_TEXT16
//
// MessageText:
//
//  16
//
#define SA_DATES_TEXT16                  0x40010020L

//
// MessageId: SA_DATES_TEXT17
//
// MessageText:
//
//  17
//
#define SA_DATES_TEXT17                  0x40010021L

//
// MessageId: SA_DATES_TEXT18
//
// MessageText:
//
//  18
//
#define SA_DATES_TEXT18                  0x40010022L

//
// MessageId: SA_DATES_TEXT19
//
// MessageText:
//
//  19
//
#define SA_DATES_TEXT19                  0x40010023L

//
// MessageId: SA_DATES_TEXT20
//
// MessageText:
//
//  20
//
#define SA_DATES_TEXT20                  0x40010024L

//
// MessageId: SA_DATES_TEXT21
//
// MessageText:
//
//  21
//
#define SA_DATES_TEXT21                  0x40010025L

//
// MessageId: SA_DATES_TEXT22
//
// MessageText:
//
//  22
//
#define SA_DATES_TEXT22                  0x40010026L

//
// MessageId: SA_DATES_TEXT23
//
// MessageText:
//
//  23
//
#define SA_DATES_TEXT23                  0x40010027L

//
// MessageId: SA_DATES_TEXT24
//
// MessageText:
//
//  24
//
#define SA_DATES_TEXT24                  0x40010028L

//
// MessageId: SA_DATES_TEXT25
//
// MessageText:
//
//  25
//
#define SA_DATES_TEXT25                  0x40010029L

//
// MessageId: SA_DATES_TEXT26
//
// MessageText:
//
//  26
//
#define SA_DATES_TEXT26                  0x4001002AL

//
// MessageId: SA_DATES_TEXT27
//
// MessageText:
//
//  27
//
#define SA_DATES_TEXT27                  0x4001002BL

//
// MessageId: SA_DATES_TEXT28
//
// MessageText:
//
//  28
//
#define SA_DATES_TEXT28                  0x4001002CL

//
// MessageId: SA_DATES_TEXT29
//
// MessageText:
//
//  29
//
#define SA_DATES_TEXT29                  0x4001002DL

//
// MessageId: SA_DATES_TEXT30
//
// MessageText:
//
//  30
//
#define SA_DATES_TEXT30                  0x4001002EL

//
// MessageId: SA_DATES_TEXT31
//
// MessageText:
//
//  31
//
#define SA_DATES_TEXT31                  0x4001002FL

///////////////////////////////////////////////////////////////////////////////
//
//  All the variables for Years
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_YEARS_TEXT1999
//
// MessageText:
//
//  1999
//
#define SA_YEARS_TEXT1999                0x40010030L

//
// MessageId: SA_YEARS_TEXT2000
//
// MessageText:
//
//  2000
//
#define SA_YEARS_TEXT2000                0x40010031L

//
// MessageId: SA_YEARS_TEXT2001
//
// MessageText:
//
//  2001
//
#define SA_YEARS_TEXT2001                0x40010032L

//
// MessageId: SA_YEARS_TEXT2002
//
// MessageText:
//
//  2002
//
#define SA_YEARS_TEXT2002                0x40010033L

//
// MessageId: SA_YEARS_TEXT2003
//
// MessageText:
//
//  2003
//
#define SA_YEARS_TEXT2003                0x40010034L

//
// MessageId: SA_YEARS_TEXT2004
//
// MessageText:
//
//  2004
//
#define SA_YEARS_TEXT2004                0x40010035L

//
// MessageId: SA_YEARS_TEXT2005
//
// MessageText:
//
//  2005
//
#define SA_YEARS_TEXT2005                0x40010036L

//
// MessageId: SA_YEARS_TEXT2006
//
// MessageText:
//
//  2006
//
#define SA_YEARS_TEXT2006                0x40010037L

//
// MessageId: SA_YEARS_TEXT2007
//
// MessageText:
//
//  2007
//
#define SA_YEARS_TEXT2007                0x40010038L

//
// MessageId: SA_YEARS_TEXT2008
//
// MessageText:
//
//  2008
//
#define SA_YEARS_TEXT2008                0x40010039L

//
// MessageId: SA_YEARS_TEXT2009
//
// MessageText:
//
//  2009
//
#define SA_YEARS_TEXT2009                0x4001003AL

//
// MessageId: SA_YEARS_TEXT2010
//
// MessageText:
//
//  2010
//
#define SA_YEARS_TEXT2010                0x4001003BL

//
// MessageId: SA_YEARS_TEXT2011
//
// MessageText:
//
//  2011
//
#define SA_YEARS_TEXT2011                0x4001003CL

//
// MessageId: SA_YEARS_TEXT2012
//
// MessageText:
//
//  2012
//
#define SA_YEARS_TEXT2012                0x4001003DL

//
// MessageId: SA_YEARS_TEXT2013
//
// MessageText:
//
//  2013
//
#define SA_YEARS_TEXT2013                0x4001003EL

//
// MessageId: SA_YEARS_TEXT2014
//
// MessageText:
//
//  2014
//
#define SA_YEARS_TEXT2014                0x4001003FL

//
// MessageId: SA_YEARS_TEXT2015
//
// MessageText:
//
//  2015
//
#define SA_YEARS_TEXT2015                0x40010040L

//
// MessageId: SA_YEARS_TEXT2016
//
// MessageText:
//
//  2016
//
#define SA_YEARS_TEXT2016                0x40010041L

//
// MessageId: SA_YEARS_TEXT2017
//
// MessageText:
//
//  2017
//
#define SA_YEARS_TEXT2017                0x40010042L

//
// MessageId: SA_YEARS_TEXT2018
//
// MessageText:
//
//  2018
//
#define SA_YEARS_TEXT2018                0x40010043L

//
// MessageId: SA_YEARS_TEXT2019
//
// MessageText:
//
//  2019
//
#define SA_YEARS_TEXT2019                0x40010044L

//
// MessageId: SA_YEARS_TEXT2020
//
// MessageText:
//
//  2020
//
#define SA_YEARS_TEXT2020                0x40010045L

//
// MessageId: SA_YEARS_TEXT2021
//
// MessageText:
//
//  2021
//
#define SA_YEARS_TEXT2021                0x40010046L

//
// MessageId: SA_YEARS_TEXT2022
//
// MessageText:
//
//  2022
//
#define SA_YEARS_TEXT2022                0x40010047L

//
// MessageId: SA_YEARS_TEXT2023
//
// MessageText:
//
//  2023
//
#define SA_YEARS_TEXT2023                0x40010048L

//
// MessageId: SA_YEARS_TEXT2024
//
// MessageText:
//
//  2024
//
#define SA_YEARS_TEXT2024                0x40010049L

//
// MessageId: SA_YEARS_TEXT2025
//
// MessageText:
//
//  2025
//
#define SA_YEARS_TEXT2025                0x4001004AL

//
// MessageId: SA_YEARS_TEXT2026
//
// MessageText:
//
//  2026
//
#define SA_YEARS_TEXT2026                0x4001004BL

//
// MessageId: SA_YEARS_TEXT2027
//
// MessageText:
//
//  2027
//
#define SA_YEARS_TEXT2027                0x4001004CL

//
// MessageId: SA_YEARS_TEXT2028
//
// MessageText:
//
//  2028
//
#define SA_YEARS_TEXT2028                0x4001004DL

//
// MessageId: SA_YEARS_TEXT2029
//
// MessageText:
//
//  2029
//
#define SA_YEARS_TEXT2029                0x4001004EL

//
// MessageId: SA_YEARS_TEXT2030
//
// MessageText:
//
//  2030
//
#define SA_YEARS_TEXT2030                0x4001004FL

//
// MessageId: SA_YEARS_TEXT2031
//
// MessageText:
//
//  2031
//
#define SA_YEARS_TEXT2031                0x40010050L

//
// MessageId: SA_YEARS_TEXT2032
//
// MessageText:
//
//  2032
//
#define SA_YEARS_TEXT2032                0x40010051L

//
// MessageId: SA_YEARS_TEXT2033
//
// MessageText:
//
//  2033
//
#define SA_YEARS_TEXT2033                0x40010052L

//
// MessageId: SA_YEARS_TEXT2034
//
// MessageText:
//
//  2034
//
#define SA_YEARS_TEXT2034                0x40010053L

//
// MessageId: SA_YEARS_TEXT2035
//
// MessageText:
//
//  2035
//
#define SA_YEARS_TEXT2035                0x40010054L

//
// MessageId: SA_YEARS_TEXT2036
//
// MessageText:
//
//  2036
//
#define SA_YEARS_TEXT2036                0x40010055L

//
// MessageId: SA_YEARS_TEXT2037
//
// MessageText:
//
//  2037
//
#define SA_YEARS_TEXT2037                0x40010056L

///////////////////////////////////////////////////////////////////////////////
//
//  All the variables for Months
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_MONTHS_TEXT1
//
// MessageText:
//
//  January
//
#define SA_MONTHS_TEXT1                  0x40010057L

//
// MessageId: SA_MONTHS_TEXT2
//
// MessageText:
//
//  February  
//
#define SA_MONTHS_TEXT2                  0x40010058L

//
// MessageId: SA_MONTHS_TEXT3
//
// MessageText:
//
//  March  
//
#define SA_MONTHS_TEXT3                  0x40010059L

//
// MessageId: SA_MONTHS_TEXT4
//
// MessageText:
//
//  April
//
#define SA_MONTHS_TEXT4                  0x4001005AL

//
// MessageId: SA_MONTHS_TEXT5
//
// MessageText:
//
//  May
//
#define SA_MONTHS_TEXT5                  0x4001005BL

//
// MessageId: SA_MONTHS_TEXT6
//
// MessageText:
//
//  June
//
#define SA_MONTHS_TEXT6                  0x4001005CL

//
// MessageId: SA_MONTHS_TEXT7
//
// MessageText:
//
//  July
//
#define SA_MONTHS_TEXT7                  0x4001005DL

//
// MessageId: SA_MONTHS_TEXT8
//
// MessageText:
//
//  August 
//
#define SA_MONTHS_TEXT8                  0x4001005EL

//
// MessageId: SA_MONTHS_TEXT9
//
// MessageText:
//
//  September 
//
#define SA_MONTHS_TEXT9                  0x4001005FL

//
// MessageId: SA_MONTHS_TEXT10
//
// MessageText:
//
//  October 
//
#define SA_MONTHS_TEXT10                 0x40010060L

//
// MessageId: SA_MONTHS_TEXT11
//
// MessageText:
//
//  November 
//
#define SA_MONTHS_TEXT11                 0x40010061L

//
// MessageId: SA_MONTHS_TEXT12
//
// MessageText:
//
//  December
//
#define SA_MONTHS_TEXT12                 0x40010062L

///////////////////////////////////////////////////////////////////////////////
//
//  All the variables for AM , PM , and 24 hrs 
// Removed neelm
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_TIME_AM
//
// MessageText:
//
//  SA_TIME_AM
//
#define SA_TIME_AM                       0x40010063L

//
// MessageId: SA_TIME_PM
//
// MessageText:
//
//  SA_TIME_PM
//
#define SA_TIME_PM                       0x40010064L

//
// MessageId: SA_TIME_24HR
//
// MessageText:
//
//  SA_TIME_24HR
//
#define SA_TIME_24HR                     0x40010065L

///////////////////////////////////////////////////////////////////////////////
//
//  All the variables for Time Zones 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_TIMEZONES_TEXT1
//
// MessageText:
//
//  (GMT-12:00) Eniwetok, Kwajalein 
//
#define SA_TIMEZONES_TEXT1               0x40010066L

//
// MessageId: SA_TIMEZONES_TEXT2
//
// MessageText:
//
//  (GMT-11:00) Midway Island, Samoa 
//
#define SA_TIMEZONES_TEXT2               0x40010067L

//
// MessageId: SA_TIMEZONES_TEXT3
//
// MessageText:
//
//  (GMT-10:00) Hawaii
//
#define SA_TIMEZONES_TEXT3               0x40010068L

//
// MessageId: SA_TIMEZONES_TEXT4
//
// MessageText:
//
//  (GMT-09:00) Alaska
//
#define SA_TIMEZONES_TEXT4               0x40010069L

//
// MessageId: SA_TIMEZONES_TEXT5
//
// MessageText:
//
//  (GMT-08:00) Pacific Time (US & Canada); Tijuana 
//
#define SA_TIMEZONES_TEXT5               0x4001006AL

//
// MessageId: SA_TIMEZONES_TEXT6
//
// MessageText:
//
//  (GMT-07:00) Arizona 
//
#define SA_TIMEZONES_TEXT6               0x4001006BL

//
// MessageId: SA_TIMEZONES_TEXT7
//
// MessageText:
//
//  (GMT-07:00) Mountain Time (US & Canada) 
//
#define SA_TIMEZONES_TEXT7               0x4001006CL

//
// MessageId: SA_TIMEZONES_TEXT8
//
// MessageText:
//
//  (GMT-06:00) Central America
//
#define SA_TIMEZONES_TEXT8               0x4001006DL

//
// MessageId: SA_TIMEZONES_TEXT9
//
// MessageText:
//
//  (GMT-06:00) Central Time (US & Canada)
//
#define SA_TIMEZONES_TEXT9               0x4001006EL

//
// MessageId: SA_TIMEZONES_TEXT10
//
// MessageText:
//
//  (GMT-06:00) Mexico City
//
#define SA_TIMEZONES_TEXT10              0x4001006FL

//
// MessageId: SA_TIMEZONES_TEXT11
//
// MessageText:
//
//  (GMT-06:00) Saskatchewan 
//
#define SA_TIMEZONES_TEXT11              0x40010070L

//
// MessageId: SA_TIMEZONES_TEXT12
//
// MessageText:
//
//  (GMT-05:00) Bogota, Lima, Quito
//
#define SA_TIMEZONES_TEXT12              0x40010071L

//
// MessageId: SA_TIMEZONES_TEXT13
//
// MessageText:
//
//  (GMT-05:00) Eastern Time (US & Canada)
//
#define SA_TIMEZONES_TEXT13              0x40010072L

//
// MessageId: SA_TIMEZONES_TEXT14
//
// MessageText:
//
//  (GMT-05:00) Indiana (East)
//
#define SA_TIMEZONES_TEXT14              0x40010073L

//
// MessageId: SA_TIMEZONES_TEXT15
//
// MessageText:
//
//  (GMT-04:00) Atlantic Time (Canada)
//
#define SA_TIMEZONES_TEXT15              0x40010074L

//
// MessageId: SA_TIMEZONES_TEXT16
//
// MessageText:
//
//  (GMT-04:00) Caracas, La Paz
//
#define SA_TIMEZONES_TEXT16              0x40010075L

//
// MessageId: SA_TIMEZONES_TEXT17
//
// MessageText:
//
//  (GMT-04:00) Santiago 
//
#define SA_TIMEZONES_TEXT17              0x40010076L

//
// MessageId: SA_TIMEZONES_TEXT18
//
// MessageText:
//
//  (GMT-03:30) Newfoundland
//
#define SA_TIMEZONES_TEXT18              0x40010077L

//
// MessageId: SA_TIMEZONES_TEXT19
//
// MessageText:
//
//  (GMT-03:00) Brasilia 
//
#define SA_TIMEZONES_TEXT19              0x40010078L

//
// MessageId: SA_TIMEZONES_TEXT20
//
// MessageText:
//
//  (GMT-03:00) Buenos Aires, Georgetown
//
#define SA_TIMEZONES_TEXT20              0x40010079L

//
// MessageId: SA_TIMEZONES_TEXT21
//
// MessageText:
//
//  (GMT-03:00) Greenland 
//
#define SA_TIMEZONES_TEXT21              0x4001007AL

//
// MessageId: SA_TIMEZONES_TEXT22
//
// MessageText:
//
//  (GMT-02:00) Mid-Atlantic
//
#define SA_TIMEZONES_TEXT22              0x4001007BL

//
// MessageId: SA_TIMEZONES_TEXT23
//
// MessageText:
//
//  (GMT-01:00) Azores
//
#define SA_TIMEZONES_TEXT23              0x4001007CL

//
// MessageId: SA_TIMEZONES_TEXT24
//
// MessageText:
//
//  (GMT-01:00) Cape Verde Is.
//
#define SA_TIMEZONES_TEXT24              0x4001007DL

//
// MessageId: SA_TIMEZONES_TEXT25
//
// MessageText:
//
//  (GMT) Casablanca, Monrovia 
//
#define SA_TIMEZONES_TEXT25              0x4001007EL

//
// MessageId: SA_TIMEZONES_TEXT26
//
// MessageText:
//
//  (GMT) Greenwich Mean Time : Dublin, Edinburgh, Lisbon, London
//
#define SA_TIMEZONES_TEXT26              0x4001007FL

//
// MessageId: SA_TIMEZONES_TEXT27
//
// MessageText:
//
//  (GMT+01:00) Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna 
//
#define SA_TIMEZONES_TEXT27              0x40010080L

//
// MessageId: SA_TIMEZONES_TEXT28
//
// MessageText:
//
//  (GMT+01:00) Belgrade, Bratislava, Budapest, Ljubljana, Prague 
//
#define SA_TIMEZONES_TEXT28              0x40010081L

//
// MessageId: SA_TIMEZONES_TEXT29
//
// MessageText:
//
//  (GMT+01:00) Brussels, Copenhagen, Madrid, Paris
//
#define SA_TIMEZONES_TEXT29              0x40010082L

//
// MessageId: SA_TIMEZONES_TEXT30
//
// MessageText:
//
//  (GMT+01:00) Sarajevo, Skopje, Sofija, Vilnius, Warsaw, Zagreb
//
#define SA_TIMEZONES_TEXT30              0x40010083L

//
// MessageId: SA_TIMEZONES_TEXT31
//
// MessageText:
//
//  (GMT+01:00) West Central Africa 
//
#define SA_TIMEZONES_TEXT31              0x40010084L

//
// MessageId: SA_TIMEZONES_TEXT32
//
// MessageText:
//
//  (GMT+02:00) Athens, Istanbul, Minsk
//
#define SA_TIMEZONES_TEXT32              0x40010085L

//
// MessageId: SA_TIMEZONES_TEXT33
//
// MessageText:
//
//  (GMT+02:00) Bucharest
//
#define SA_TIMEZONES_TEXT33              0x40010086L

//
// MessageId: SA_TIMEZONES_TEXT34
//
// MessageText:
//
//  (GMT+02:00) Cairo
//
#define SA_TIMEZONES_TEXT34              0x40010087L

//
// MessageId: SA_TIMEZONES_TEXT35
//
// MessageText:
//
//  (GMT+02:00) Harare, Pretoria
//
#define SA_TIMEZONES_TEXT35              0x40010088L

//
// MessageId: SA_TIMEZONES_TEXT36
//
// MessageText:
//
//  (GMT+02:00) Helsinki, Riga, Tallinn 
//
#define SA_TIMEZONES_TEXT36              0x40010089L

//
// MessageId: SA_TIMEZONES_TEXT37
//
// MessageText:
//
//  (GMT+02:00) Jerusalem 
//
#define SA_TIMEZONES_TEXT37              0x4001008AL

//
// MessageId: SA_TIMEZONES_TEXT38
//
// MessageText:
//
//  (GMT+03:00) Baghdad
//
#define SA_TIMEZONES_TEXT38              0x4001008BL

//
// MessageId: SA_TIMEZONES_TEXT39
//
// MessageText:
//
//  (GMT+03:00) Kuwait, Riyadh
//
#define SA_TIMEZONES_TEXT39              0x4001008CL

//
// MessageId: SA_TIMEZONES_TEXT40
//
// MessageText:
//
//  (GMT+03:00) Moscow, St. Petersburg, Volgograd
//
#define SA_TIMEZONES_TEXT40              0x4001008DL

//
// MessageId: SA_TIMEZONES_TEXT41
//
// MessageText:
//
//  (GMT+03:00) Nairobi
//
#define SA_TIMEZONES_TEXT41              0x4001008EL

//
// MessageId: SA_TIMEZONES_TEXT42
//
// MessageText:
//
//  (GMT+03:30) Tehran
//
#define SA_TIMEZONES_TEXT42              0x4001008FL

//
// MessageId: SA_TIMEZONES_TEXT43
//
// MessageText:
//
//  (GMT+04:00) Abu Dhabi, Muscat
//
#define SA_TIMEZONES_TEXT43              0x40010090L

//
// MessageId: SA_TIMEZONES_TEXT44
//
// MessageText:
//
//  (GMT+04:00) Baku, Tbilisi, Yerevan 
//
#define SA_TIMEZONES_TEXT44              0x40010091L

//
// MessageId: SA_TIMEZONES_TEXT45
//
// MessageText:
//
//  (GMT+04:30) Kabul
//
#define SA_TIMEZONES_TEXT45              0x40010092L

//
// MessageId: SA_TIMEZONES_TEXT46
//
// MessageText:
//
//  (GMT+05:00) Ekaterinburg 
//
#define SA_TIMEZONES_TEXT46              0x40010093L

//
// MessageId: SA_TIMEZONES_TEXT47
//
// MessageText:
//
//  (GMT+05:00) Islamabad, Karachi, Tashkent
//
#define SA_TIMEZONES_TEXT47              0x40010094L

//
// MessageId: SA_TIMEZONES_TEXT48
//
// MessageText:
//
//  (GMT+05:30) Calcutta, Chennai, Mumbai, New Delhi
//
#define SA_TIMEZONES_TEXT48              0x40010095L

//
// MessageId: SA_TIMEZONES_TEXT49
//
// MessageText:
//
//  (GMT+05:45) Kathmandu
//
#define SA_TIMEZONES_TEXT49              0x40010096L

//
// MessageId: SA_TIMEZONES_TEXT50
//
// MessageText:
//
//  (GMT+06:00) Almaty, Novosibirsk
//
#define SA_TIMEZONES_TEXT50              0x40010097L

//
// MessageId: SA_TIMEZONES_TEXT51
//
// MessageText:
//
//  (GMT+06:00) Astana, Dhaka
//
#define SA_TIMEZONES_TEXT51              0x40010098L

//
// MessageId: SA_TIMEZONES_TEXT52
//
// MessageText:
//
//  (GMT+06:00) Sri Jayawardenepura
//
#define SA_TIMEZONES_TEXT52              0x40010099L

//
// MessageId: SA_TIMEZONES_TEXT53
//
// MessageText:
//
//  (GMT+06:30) Rangoon
//
#define SA_TIMEZONES_TEXT53              0x4001009AL

//
// MessageId: SA_TIMEZONES_TEXT54
//
// MessageText:
//
//  (GMT+07:00) Bangkok, Hanoi, Jakarta 
//
#define SA_TIMEZONES_TEXT54              0x4001009BL

//
// MessageId: SA_TIMEZONES_TEXT55
//
// MessageText:
//
//  (GMT+07:00) Krasnoyarsk
//
#define SA_TIMEZONES_TEXT55              0x4001009CL

//
// MessageId: SA_TIMEZONES_TEXT56
//
// MessageText:
//
//  (GMT+08:00) Beijing, Chongqing, Hong Kong, Urumqi
//
#define SA_TIMEZONES_TEXT56              0x4001009DL

//
// MessageId: SA_TIMEZONES_TEXT57
//
// MessageText:
//
//  (GMT+08:00) Irkutsk, Ulaan Bataar
//
#define SA_TIMEZONES_TEXT57              0x4001009EL

//
// MessageId: SA_TIMEZONES_TEXT58
//
// MessageText:
//
//  (GMT+08:00) Kuala Lumpur, Singapore
//
#define SA_TIMEZONES_TEXT58              0x4001009FL

//
// MessageId: SA_TIMEZONES_TEXT59
//
// MessageText:
//
//  (GMT+08:00) Perth
//
#define SA_TIMEZONES_TEXT59              0x400100A0L

//
// MessageId: SA_TIMEZONES_TEXT60
//
// MessageText:
//
//  (GMT+08:00) Taipei
//
#define SA_TIMEZONES_TEXT60              0x400100A1L

//
// MessageId: SA_TIMEZONES_TEXT61
//
// MessageText:
//
//  (GMT+09:00) Osaka, Sapporo, Tokyo
//
#define SA_TIMEZONES_TEXT61              0x400100A2L

//
// MessageId: SA_TIMEZONES_TEXT62
//
// MessageText:
//
//  (GMT+09:00) Seoul
//
#define SA_TIMEZONES_TEXT62              0x400100A3L

//
// MessageId: SA_TIMEZONES_TEXT63
//
// MessageText:
//
//  (GMT+09:00) Yakutsk
//
#define SA_TIMEZONES_TEXT63              0x400100A4L

//
// MessageId: SA_TIMEZONES_TEXT64
//
// MessageText:
//
//  (GMT+09:30) Adelaide
//
#define SA_TIMEZONES_TEXT64              0x400100A5L

//
// MessageId: SA_TIMEZONES_TEXT65
//
// MessageText:
//
//  (GMT+09:30) Darwin
//
#define SA_TIMEZONES_TEXT65              0x400100A6L

//
// MessageId: SA_TIMEZONES_TEXT66
//
// MessageText:
//
//  (GMT+10:00) Brisbane
//
#define SA_TIMEZONES_TEXT66              0x400100A7L

//
// MessageId: SA_TIMEZONES_TEXT67
//
// MessageText:
//
//  (GMT+10:00) Canberra, Melbourne, Sydney
//
#define SA_TIMEZONES_TEXT67              0x400100A8L

//
// MessageId: SA_TIMEZONES_TEXT68
//
// MessageText:
//
//  (GMT+10:00) Guam, Port Moresby
//
#define SA_TIMEZONES_TEXT68              0x400100A9L

//
// MessageId: SA_TIMEZONES_TEXT69
//
// MessageText:
//
//  (GMT+10:00) Hobart
//
#define SA_TIMEZONES_TEXT69              0x400100AAL

//
// MessageId: SA_TIMEZONES_TEXT70
//
// MessageText:
//
//  (GMT+10:00) Vladivostok
//
#define SA_TIMEZONES_TEXT70              0x400100ABL

//
// MessageId: SA_TIMEZONES_TEXT71
//
// MessageText:
//
//  (GMT+11:00) Magadan, Solomon Is., New Caledonia
//
#define SA_TIMEZONES_TEXT71              0x400100ACL

//
// MessageId: SA_TIMEZONES_TEXT72
//
// MessageText:
//
//  (GMT+12:00) Auckland, Wellington 
//
#define SA_TIMEZONES_TEXT72              0x400100ADL

//
// MessageId: SA_TIMEZONES_TEXT73
//
// MessageText:
//
//  (GMT+12:00) Fiji, Kamchatka, Marshall Is.
//
#define SA_TIMEZONES_TEXT73              0x400100AEL

//
// MessageId: SA_TIMEZONES_TEXT74
//
// MessageText:
//
//  (GMT+13:00) Nuku'alofa
//
#define SA_TIMEZONES_TEXT74              0x400100AFL

///////////////////////////////////////////////////////////////////////////////
//Following are the alert messages for setdatetime
// 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_DATETIME_NOT_CONFIGURED_ALERT
//
// MessageText:
//
//  Date and time not set up
//
#define SA_DATETIME_NOT_CONFIGURED_ALERT 0x400100B0L

//
// MessageId: SA_DATETIME_NOT_CONFIGURED_ACTION
//
// MessageText:
//
//  The server needs to have the correct time. To set the date and time, choose Date and Time Settings
//
#define SA_DATETIME_NOT_CONFIGURED_ACTION 0x400100B1L

//
// MessageId: SA_DATETIME_TASKNAME_USERACTION
//
// MessageText:
//
//  Date and Time Settings
//
#define SA_DATETIME_TASKNAME_USERACTION  0x400100B2L

///////////////////////////////////////////////////////////////////////////////
//
// Datetime tab 
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_MAIN_MAINTENANCE_DATE_AND_TIME
//
// MessageText:
//
//  Date/Time
//
#define L_MAIN_MAINTENANCE_DATE_AND_TIME 0x40020001L

//
// MessageId: L_MAIN_MAINTENANCE_DATE_AND_TIME_DESCRIPTION
//
// MessageText:
//
//  Set the date and time on the server.
//
#define L_MAIN_MAINTENANCE_DATE_AND_TIME_DESCRIPTION 0x40020002L

///////////////////////////////////////////////////////////////////////////////
//
// New error message
//
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: SA_INVALIDDATEEX_ERRORMESSAGE
//
// MessageText:
//
//  (%1 %2 %3) is not in the range of valid dates.
//
#define SA_INVALIDDATEEX_ERRORMESSAGE    0x400100B3L

///////////////////////////////////////////////////////////////////////////////
// HELP STRINGS
///////////////////////////////////////////////////////////////////////////////
//
// MessageId: L_DATE_AND_TIME
//
// MessageText:
//
//  Date and Time
//
#define L_DATE_AND_TIME                  0x40010190L

