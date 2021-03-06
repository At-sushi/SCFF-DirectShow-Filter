﻿// Copyright 2012 Alalf <alalf.iQLc_at_gmail.com>
//
// This file is part of SCFF DSF.
//
// SCFF DSF is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SCFF DSF is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with SCFF DSF.  If not, see <http://www.gnu.org/licenses/>.

/// @file scff-imaging/layout.h
/// @brief scff_imaging::Layoutの宣言

#ifndef SCFF_DSF_SCFF_IMAGING_LAYOUT_H_
#define SCFF_DSF_SCFF_IMAGING_LAYOUT_H_

#include "scff-imaging/processor.h"
#include "scff-imaging/avpicture-image.h"

namespace scff_imaging {

/// @brief レイアウト: 入力がない特殊なプロセッサ
typedef Processor<void, AVPictureImage> Layout;

}   // namespace scff_imaging

#endif  // SCFF_DSF_SCFF_IMAGING_LAYOUT_H_
