/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimpoperationhardlight.h
 * Copyright (C) 2008 Michael Natterer <mitch@gimp.org>
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

#ifndef __GIMP_OPERATION_HARDLIGHT_H__
#define __GIMP_OPERATION_HARDLIGHT_H__


#include "gimpoperationlayermode.h"


#define GIMP_TYPE_OPERATION_HARDLIGHT            (gimp_operation_hardlight_get_type ())
#define GIMP_OPERATION_HARDLIGHT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIMP_TYPE_OPERATION_HARDLIGHT, GimpOperationHardlight))
#define GIMP_OPERATION_HARDLIGHT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GIMP_TYPE_OPERATION_HARDLIGHT, GimpOperationHardlightClass))
#define GIMP_IS_OPERATION_HARDLIGHT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIMP_TYPE_OPERATION_HARDLIGHT))
#define GIMP_IS_OPERATION_HARDLIGHT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GIMP_TYPE_OPERATION_HARDLIGHT))
#define GIMP_OPERATION_HARDLIGHT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GIMP_TYPE_OPERATION_HARDLIGHT, GimpOperationHardlightClass))


typedef struct _GimpOperationHardlight      GimpOperationHardlight;
typedef struct _GimpOperationHardlightClass GimpOperationHardlightClass;

struct _GimpOperationHardlight
{
  GimpOperationLayerMode  parent_instance;
};

struct _GimpOperationHardlightClass
{
  GimpOperationLayerModeClass  parent_class;
};


GType    gimp_operation_hardlight_get_type (void) G_GNUC_CONST;

gboolean gimp_operation_hardlight_process  (GeglOperation       *op,
                                            void                *in,
                                            void                *layer,
                                            void                *mask,
                                            void                *out,
                                            glong                samples,
                                            const GeglRectangle *roi,
                                            gint                 level);


#endif /* __GIMP_OPERATION_HARDLIGHT_H__ */
