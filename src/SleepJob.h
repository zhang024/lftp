/*
 * lftp and utils
 *
 * Copyright (c) 1998 by Alexander V. Lukyanov (lav@yars.free.net)
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* $Id$ */

#ifndef SLEEPJOB_H
#define SLEEPJOB_H

#include "Job.h"

class SleepJob : public SessionJob
{
   time_t the_time;
   char *cmd;
   int exit_code;
   bool done;
   char *saved_cwd;

public:
   int Do();
   int Done() { return done; }
   int ExitCode() { return exit_code; }

   SleepJob(time_t when,FileAccess *s=0,char *what=0);
   ~SleepJob();
};

#endif//SLEEPJOB_H
