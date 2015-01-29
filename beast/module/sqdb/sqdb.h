//------------------------------------------------------------------------------
/*
    This file is part of Beast: https://github.com/vinniefalco/Beast
    Copyright 2013, Vinnie Falco <vinnie.falco@gmail.com>

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

    Portions based on SOCI - The C++ Database Access Library: 

    SOCI: http://soci.sourceforge.net/

    This file incorporates work covered by the following copyright
    and permission notice:

    Copyright (C) 2004 Maciej Sobczak, Stephen Hutton, Mateusz Loskot,
    Pawel Aleksander Fedorynski, David Courtney, Rafal Bobrowski,
    Julian Taylor, Henning Basold, Ilia Barahovski, Denis Arnaud,
    Daniel Lidstr�m, Matthieu Kermagoret, Artyom Beilis, Cory Bennett,
    Chris Weed, Michael Davidsaver, Jakub Stachowski, Alex Ott, Rainer Bauer,
    Martin Muenstermann, Philip Pemberton, Eli Green, Frederic Chateau,
    Artyom Tonkikh, Roger Orr, Robert Massaioli, Sergey Nikulov,
    Shridhar Daithankar, S�ren Meyer-Eppler, Mario Valesco.

    Boost Software License - Version 1.0, August 17th, 2003

    Permission is hereby granted, free of charge, to any person or organization
    obtaining a copy of the software and accompanying documentation covered by
    this license (the "Software") to use, reproduce, display, distribute,
    execute, and transmit the Software, and to prepare derivative works of the
    Software, and to permit third-parties to whom the Software is furnished to
    do so, all subject to the following:

    The copyright notices in the Software and this entire statement, including
    the above license grant, this restriction and the following disclaimer,
    must be included in all copies of the Software, in whole or in part, and
    all derivative works of the Software, unless such copies or derivative
    works are solely in the form of machine-executable object code generated by
    a source language processor.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
    SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
    FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/
//==============================================================================

#ifndef BEAST_MODULE_SQDB_SQDB_H_INCLUDED
#define BEAST_MODULE_SQDB_SQDB_H_INCLUDED

/** An embedded database wrapper with an intuitive, type-safe interface.

    This collection of classes let's you access embedded SQLite databases
    using C++ syntax that is very similar to regular SQL.

    This module requires the @ref beast_sqlite external module.
*/

#include <ctime>

// forward declares
struct sqlite3;
struct sqlite3_blob;
struct sqlite3_stmt;
namespace beast {
namespace sqdb {
namespace detail {
class prepare_temp_type;
class ref_counted_statement; // statement.h
class statement_imp;         // into_type.h, use_type.h
}
class blob;                  // exchange_traits.h
class session;               // statement.h
}
}

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4355) // 'this' : used in base member initializer list
#endif

#include <beast/module/sqdb/api/backend.h>
#include <beast/module/sqdb/api/transaction.h>
#include <beast/module/sqdb/detail/type_ptr.h>

#include <beast/module/sqdb/api/blob.h>
#include <beast/module/sqdb/api/type_conversion_traits.h>

#include <beast/module/sqdb/detail/exchange_traits.h>

#include <beast/module/sqdb/detail/into_type.h>
#include <beast/module/sqdb/detail/use_type.h>

#include <beast/module/sqdb/api/statement.h>
#include <beast/module/sqdb/detail/type_conversion.h>

#include <beast/module/sqdb/detail/ref_counted_statement.h>

#include <beast/module/sqdb/api/into.h>
#include <beast/module/sqdb/api/use.h>
#include <beast/module/sqdb/detail/ref_counted_prepare_info.h>

#include <beast/module/sqdb/detail/prepare_temp_type.h>

#include <beast/module/sqdb/detail/once_temp_type.h>

#include <beast/module/sqdb/api/session.h>

#if _MSC_VER
#pragma warning (pop)
#endif

#endif
