
/*******************************************************************************/
/* Copyright (C) 2008 Jonathan Moore Liles                                     */
/*                                                                             */
/* This program is free software; you can redistribute it and/or modify it     */
/* under the terms of the GNU General Public License as published by the       */
/* Free Software Foundation; either version 2 of the License, or (at your      */
/* option) any later version.                                                  */
/*                                                                             */
/* This program is distributed in the hope that it will be useful, but WITHOUT */
/* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       */
/* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for   */
/* more details.                                                               */
/*                                                                             */
/* You should have received a copy of the GNU General Public License along     */
/* with This program; see the file COPYING.  If not,write to the Free Software */
/* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */
/*******************************************************************************/

#pragma once

#include "types.h"

void buffer_apply_gain ( sample_t *buf, nframes_t nframes, float g );
void buffer_apply_gain_buffer ( sample_t *buf, sample_t *gainbuf, nframes_t nframes );
void buffer_mix ( sample_t *dst, sample_t *src, nframes_t nframes );
void buffer_mix_with_gain ( sample_t *dst, sample_t *src, nframes_t nframes, float g );
void buffer_interleave_one_channel ( sample_t *dst, sample_t *src, int channel, int channels, nframes_t nframes );
void buffer_interleave_one_channel_and_mix ( sample_t *dst, sample_t *src, int channel, int channels, nframes_t nframes );
void buffer_deinterleave_one_channel ( sample_t *dst, sample_t *src, int channel, int channels, nframes_t nframes );