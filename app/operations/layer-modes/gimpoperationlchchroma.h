/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimpoperationlchchroma.h
 * Copyright (C) 2015 Elle Stone <ellestone@ninedegreesbelow.com>
 *                    Massimo Valentini <mvalentini@src.gnome.org>
 *                    Thomas Manni <thomas.manni@free.fr>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_OPERATION_LCH_CHROMA_H__
#define __GIMP_OPERATION_LCH_CHROMA_H__


#include "gimpoperationlayermode.h"


#define GIMP_TYPE_OPERATION_LCH_CHROMA            (gimp_operation_lch_chroma_get_type ())
#define GIMP_OPERATION_LCH_CHROMA(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIMP_TYPE_OPERATION_LCH_CHROMA, GimpOperationLchChroma))
#define GIMP_OPERATION_LCH_CHROMA_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GIMP_TYPE_OPERATION_LCH_CHROMA, GimpOperationLchChromaClass))
#define GIMP_IS_OPERATION_LCH_CHROMA(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIMP_TYPE_OPERATION_LCH_CHROMA))
#define GIMP_IS_OPERATION_LCH_CHROMA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GIMP_TYPE_OPERATION_LCH_CHROMA))
#define GIMP_OPERATION_LCH_CHROMA_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GIMP_TYPE_OPERATION_LCH_CHROMA, GimpOperationLchChromaClass))


typedef struct _GimpOperationLchChroma      GimpOperationLchChroma;
typedef struct _GimpOperationLchChromaClass GimpOperationLchChromaClass;

struct _GimpOperationLchChroma
{
  GimpOperationLayerMode  parent_instance;
};

struct _GimpOperationLchChromaClass
{
  GimpOperationLayerModeClass  parent_class;
};


GType    gimp_operation_lch_chroma_get_type (void) G_GNUC_CONST;

gboolean gimp_operation_lch_chroma_process  (GeglOperation       *op,
                                             void                *in,
                                             void                *layer,
                                             void                *mask,
                                             void                *out,
                                             glong                samples,
                                             const GeglRectangle *roi,
                                             gint                 level);


#endif /* __GIMP_OPERATION_LCH_CHROMA_H__ */
