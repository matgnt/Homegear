/* Copyright 2013-2019 Homegear GmbH
 *
 * Homegear is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * Homegear is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Homegear.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU Lesser General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
*/

#ifndef HOMEGEAR_PHP_NODE_H_
#define HOMEGEAR_PHP_NODE_H_

#ifndef NO_SCRIPTENGINE

#include <homegear-base/BaseLib.h>
#include "php_homegear_globals.h"
#include "php_config_fixes.h"

#include <php.h>
#include <SAPI.h>
#include <php_main.h>
#include <php_variables.h>
#include <php_ini.h>
#include <zend_API.h>
#include <zend_ini.h>
#include <zend_exceptions.h>

void php_node_startup();

bool php_init_node(PScriptInfo scriptInfo, zend_class_entry* homegearNodeClassEntry, zval* homegearNodeObject);

BaseLib::PVariable php_node_object_invoke_local(PScriptInfo& scriptInfo, zval* homegearNodeObject, std::string& methodName, BaseLib::PArray& parameters);

#endif
#endif
