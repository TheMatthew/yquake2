/*
 * lttng-ust-standard-tp.h
 *
 *  Created on: Sep 11, 2014
 *      Author: ematkho
 */
#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER lttng_ust_quake2
#ifndef LTTNG_UST_STANDARD_TP_H_
#define LTTNG_UST_STANDARD_TP_H_

/*
 * Copyright (C) 2011-2013  Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(lttng_ust_quake2, unit_coord,
		TP_ARGS(char * , id, int, x, int , y, int, health),
		TP_FIELDS(
				ctf_string(id, id)
				ctf_integer(int, x, x)
				ctf_integer(int, y, y)
				ctf_integer(int, health, health)
		)
)
#undef TRACEPOINT_INCLUDE_FILE
#define TRACEPOINT_INCLUDE_FILE ./lttng-ust-standard-tp.h

/* This part must be outside ifdef protection */
#include <lttng/tracepoint-event.h>

#endif /* LTTNG_UST_STANDARD_TP_H_ */
