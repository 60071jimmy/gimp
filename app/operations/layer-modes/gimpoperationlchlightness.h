/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimpoperationlchlightness.h
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

#ifndef __GIMP_OPERATION_LCH_LIGHTNESS_H__
#define __GIMP_OPERATION_LCH_LIGHTNESS_H__


#include "gimpoperationlayermode.h"


#define GIMP_TYPE_OPERATION_LCH_LIGHTNESS            (gimp_operation_lch_lightness_get_type ())
#define GIMP_OPERATION_LCH_LIGHTNESS(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIMP_TYPE_OPERATION_LCH_LIGHTNESS, GimpOperationLchLightness))
#define GIMP_OPERATION_LCH_LIGHTNESS_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GIMP_TYPE_OPERATION_LCH_LIGHTNESS, GimpOperationLchLightnessClass))
#define GIMP_IS_OPERATION_LCH_LIGHTNESS(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIMP_TYPE_OPERATION_LCH_LIGHTNESS))
#define GIMP_IS_OPERATION_LCH_LIGHTNESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GIMP_TYPE_OPERATION_LCH_LIGHTNESS))
#define GIMP_OPERATION_LCH_LIGHTNESS_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GIMP_TYPE_OPERATION_LCH_LIGHTNESS, GimpOperationLchLightnessClass))


typedef struct _GimpOperationLchLightness      GimpOperationLchLightness;
typedef struct _GimpOperationLchLightnessClass GimpOperationLchLightnessClass;

struct _GimpOperationLchLightness
{
  GimpOperationLayerMode  parent_instance;
};

struct _GimpOperationLchLightnessClass
{
  GimpOperationLayerModeClass  parent_class;
};


GType    gimp_operation_lch_lightness_get_type (void) G_GNUC_CONST;

gboolean gimp_operation_lch_lightness_process  (GeglOperation       *op,
                                                void                *in,
                                                void                *layer,
                                                void                *mask,
                                                void                *out,
                                                glong                samples,
                                                const GeglRectangle *roi,
                                                gint                 level);


#endif /* __GIMP_OPERATION_LCH_LIGHTNESS_H__ */
