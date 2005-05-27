/* Generated by wbuild
 * (generator version 3.2)
 */
#include <X11/IntrinsicP.h>
#include <X11/StringDefs.h>
#include <./xwButtonP.h>
static void activate(
#if NeedFunctionPrototypes
Widget,XEvent*,String*,Cardinal*
#endif
);
static void enter(
#if NeedFunctionPrototypes
Widget,XEvent*,String*,Cardinal*
#endif
);
static void leave(
#if NeedFunctionPrototypes
Widget,XEvent*,String*,Cardinal*
#endif
);

static XtActionsRec actionsList[] = {
{"activate", activate},
{"enter", enter},
{"leave", leave},
};

static char defaultTranslations[] = "\
<Btn1Down>: set_shadow(sunken) \n\
<Btn1Up>: activate() set_shadow() \n\
Button1<Leave>: set_shadow() leave() \n\
Button1<Enter>: set_shadow(sunken) enter() \n\
<Key>Return: set_shadow(sunken) activate() set_shadow() \n\
<EnterNotify>: enter() \n\
<LeaveNotify>: leave() \n\
";
static void _resolve_inheritance(
#if NeedFunctionPrototypes
WidgetClass
#endif
);

static XtResource resources[] = {
{XtNactivate,XtCActivate,XtRCallback,sizeof(((XfwfButtonRec*)NULL)->xfwfButton.activate),XtOffsetOf(XfwfButtonRec,xfwfButton.activate),XtRImmediate,(XtPointer)NULL },
{XtNenter,XtCEnter,XtRCallback,sizeof(((XfwfButtonRec*)NULL)->xfwfButton.enter),XtOffsetOf(XfwfButtonRec,xfwfButton.enter),XtRImmediate,(XtPointer)NULL },
{XtNleave,XtCLeave,XtRCallback,sizeof(((XfwfButtonRec*)NULL)->xfwfButton.leave),XtOffsetOf(XfwfButtonRec,xfwfButton.leave),XtRImmediate,(XtPointer)NULL },
{XtNframeWidth,XtCFrameWidth,XtRDimension,sizeof(((XfwfButtonRec*)NULL)->xfwfFrame.frameWidth),XtOffsetOf(XfwfButtonRec,xfwfFrame.frameWidth),XtRImmediate,(XtPointer)2 },
{XtNtraversalOn,XtCTraversalOn,XtRBoolean,sizeof(((XfwfButtonRec*)NULL)->xfwfCommon.traversalOn),XtOffsetOf(XfwfButtonRec,xfwfCommon.traversalOn),XtRImmediate,(XtPointer)True },
};

XfwfButtonClassRec xfwfButtonClassRec = {
{ /* core_class part */
/* superclass   	*/  (WidgetClass) &xfwfLabelClassRec,
/* class_name   	*/  "XfwfButton",
/* widget_size  	*/  sizeof(XfwfButtonRec),
/* class_initialize 	*/  NULL,
/* class_part_initialize*/  _resolve_inheritance,
/* class_inited 	*/  FALSE,
/* initialize   	*/  NULL,
/* initialize_hook 	*/  NULL,
/* realize      	*/  XtInheritRealize,
/* actions      	*/  actionsList,
/* num_actions  	*/  3,
/* resources    	*/  resources,
/* num_resources 	*/  5,
/* xrm_class    	*/  NULLQUARK,
/* compres_motion 	*/  True ,
/* compress_exposure 	*/  XtExposeCompressMultiple ,
/* compress_enterleave 	*/  True ,
/* visible_interest 	*/  False ,
/* destroy      	*/  NULL,
/* resize       	*/  XtInheritResize,
/* expose       	*/  XtInheritExpose,
/* set_values   	*/  NULL,
/* set_values_hook 	*/  NULL,
/* set_values_almost 	*/  XtInheritSetValuesAlmost,
/* get_values+hook 	*/  NULL,
/* accept_focus 	*/  XtInheritAcceptFocus,
/* version      	*/  XtVersion,
/* callback_private 	*/  NULL,
/* tm_table      	*/  defaultTranslations,
/* query_geometry 	*/  XtInheritQueryGeometry,
/* display_acceleator 	*/  XtInheritDisplayAccelerator,
/* extension    	*/  NULL 
},
{ /* composite_class part */
XtInheritGeometryManager,
XtInheritChangeManaged,
XtInheritInsertChild,
XtInheritDeleteChild,
NULL
},
{ /* XfwfCommon_class part */
XtInherit_compute_inside,
XtInherit_total_frame_width,
XtInherit__expose,
XtInherit_highlight_border,
XtInherit_unhighlight_border,
XtInherit_hilite_callbacks,
XtInherit_would_accept_focus,
XtInherit_traverse,
XtInherit_lighter_color,
XtInherit_darker_color,
XtInherit_set_color,
/* traversal_trans */  NULL ,
/* traversal_trans_small */  NULL ,
/* travMode */  1 ,
},
{ /* XfwfFrame_class part */
 /* dummy */  0
},
{ /* XfwfBoard_class part */
XtInherit_set_abs_location,
},
{ /* XfwfLabel_class part */
XtInherit_set_label,
},
{ /* XfwfButton_class part */
 /* dummy */  0
},
};
WidgetClass xfwfButtonWidgetClass = (WidgetClass) &xfwfButtonClassRec;
/*ARGSUSED*/
static void activate(self,event,params,num_params)Widget self;XEvent*event;String*params;Cardinal*num_params;
{
    if (((XfwfButtonWidget)self)->xfwfFrame.frameType == XfwfSunken)
      XtCallCallbackList(self, ((XfwfButtonWidget)self)->xfwfButton.activate, event);
}

/*ARGSUSED*/
static void enter(self,event,params,num_params)Widget self;XEvent*event;String*params;Cardinal*num_params;
{
    XtCallCallbackList(self, ((XfwfButtonWidget)self)->xfwfButton.enter, event);
}

/*ARGSUSED*/
static void leave(self,event,params,num_params)Widget self;XEvent*event;String*params;Cardinal*num_params;
{
    XtCallCallbackList(self, ((XfwfButtonWidget)self)->xfwfButton.leave, event);
}

static void _resolve_inheritance(class)
WidgetClass class;
{
  XfwfButtonWidgetClass c = (XfwfButtonWidgetClass) class;
  XfwfButtonWidgetClass super;
  static CompositeClassExtensionRec extension_rec = {
    NULL, NULLQUARK, XtCompositeExtensionVersion,
    sizeof(CompositeClassExtensionRec), True};
  CompositeClassExtensionRec *ext;
  ext = (XtPointer)XtMalloc(sizeof(*ext));
  *ext = extension_rec;
  ext->next_extension = c->composite_class.extension;
  c->composite_class.extension = ext;
  if (class == xfwfButtonWidgetClass) return;
  super = (XfwfButtonWidgetClass)class->core_class.superclass;
}
