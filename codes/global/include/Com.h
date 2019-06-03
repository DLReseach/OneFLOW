/*---------------------------------------------------------------------------*\
OneFLOW - LargeScale Multiphysics Scientific Simulation Environment
Copyright (C) 2017-2019 He Xin and the OneFLOW contributors.
-------------------------------------------------------------------------------
License
This file is part of OneFLOW.

OneFLOW is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OneFLOW is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with OneFLOW.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/
#pragma once
#include "HXDefine.h"

BeginNameSpace( ONEFLOW )

class GCom
{
public:
    GCom();
    ~GCom();
public:
    void Reverse();
    void CmpTangent();
    void SetGeometry();
public:
    int blank;
    int faceOuterNormal;
    int idegenerate;
    bool swapflag;
public:
    Real fnx, fny, fnz;
    Real fvx, fvy, fvz, fvn, farea;
    Real t1x, t1y, t1z;
    Real t2x, t2y, t2z;
    Real cvol, cvol1, cvol2;
    Real ccx1, ccy1, ccz1;
    Real ccx2, ccy2, ccz2;
    Real fcx, fcy, fcz;
};

extern GCom gcom;

EndNameSpace