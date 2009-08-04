#ifndef foodbusifacecorehfoo
#define foodbusifacecorehfoo

/***
  This file is part of PulseAudio.

  Copyright 2009 Tanu Kaskinen

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2.1 of the License,
  or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

/* This object implements the D-Bus interface org.PulseAudio.Core1.
 *
 * See http://pulseaudio.org/wiki/DBusInterface for the Core interface
 * documentation.
 */

#include <pulsecore/core.h>

#define PA_DBUSIFACE_CORE_INTERFACE "org.PulseAudio.Core1"

typedef struct pa_dbusiface_core pa_dbusiface_core;

pa_dbusiface_core *pa_dbusiface_core_new(pa_core *core);
void pa_dbusiface_core_free(pa_dbusiface_core *c);

#endif
