/**
 * This file is part of Tales of Zestiria "Fix".
 *
 * Tales of Zestiria "Fix" is free software : you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * as published by The Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * Tales of Zestiria "Fix" is distributed in the hope that it will be
 * useful,
 *
 * But WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tales of Zestiria "Fix".
 *
 *   If not, see <http://www.gnu.org/licenses/>.
 *
**/
#ifndef __TZF__HOOK_H__
#define __TZF__HOOK_H__

#include "MinHook/include/MinHook.h"

MH_STATUS
WINAPI
TZF_CreateFuncHook ( LPCWSTR pwszFuncName,
                     LPVOID  pTarget,
                     LPVOID  pDetour,
                     LPVOID *ppOriginal );

MH_STATUS
WINAPI
TZF_CreateDLLHook ( LPCWSTR pwszModule, LPCSTR  pszProcName,
                    LPVOID  pDetour,    LPVOID *ppOriginal,
                    LPVOID* ppFuncAddr = nullptr );

MH_STATUS
WINAPI
TZF_EnableHook (LPVOID pTarget);

MH_STATUS
WINAPI
TZF_DisableHook (LPVOID pTarget);

MH_STATUS
WINAPI
TZF_RemoveHook (LPVOID pTarget);

MH_STATUS
WINAPI
TZF_Init_MinHook (void);

MH_STATUS
WINAPI
TZF_UnInit_MinHook (void);

#endif __TZF__HOOK_H__