/* panel.c generated by valac 0.30.0, the Vala compiler
 * generated from panel.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <cairo.h>
#include <float.h>
#include <math.h>


#define ULTI_TYPE_ULTI_PANEL (ulti_ulti_panel_get_type ())
#define ULTI_ULTI_PANEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ULTI_TYPE_ULTI_PANEL, UltiUltiPanel))
#define ULTI_ULTI_PANEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ULTI_TYPE_ULTI_PANEL, UltiUltiPanelClass))
#define ULTI_IS_ULTI_PANEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ULTI_TYPE_ULTI_PANEL))
#define ULTI_IS_ULTI_PANEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ULTI_TYPE_ULTI_PANEL))
#define ULTI_ULTI_PANEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ULTI_TYPE_ULTI_PANEL, UltiUltiPanelClass))

typedef struct _UltiUltiPanel UltiUltiPanel;
typedef struct _UltiUltiPanelClass UltiUltiPanelClass;
typedef struct _UltiUltiPanelPrivate UltiUltiPanelPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define ULTI_TYPE_ULTIPOST (ulti_ultipost_get_type ())
#define ULTI_ULTIPOST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ULTI_TYPE_ULTIPOST, UltiUltipost))
#define ULTI_ULTIPOST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ULTI_TYPE_ULTIPOST, UltiUltipostClass))
#define ULTI_IS_ULTIPOST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ULTI_TYPE_ULTIPOST))
#define ULTI_IS_ULTIPOST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ULTI_TYPE_ULTIPOST))
#define ULTI_ULTIPOST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ULTI_TYPE_ULTIPOST, UltiUltipostClass))

typedef struct _UltiUltipost UltiUltipost;
typedef struct _UltiUltipostClass UltiUltipostClass;

#define ULTI_TYPE_ULTI_LAUNCH (ulti_ulti_launch_get_type ())
#define ULTI_ULTI_LAUNCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunch))
#define ULTI_ULTI_LAUNCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunchClass))
#define ULTI_IS_ULTI_LAUNCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ULTI_TYPE_ULTI_LAUNCH))
#define ULTI_IS_ULTI_LAUNCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ULTI_TYPE_ULTI_LAUNCH))
#define ULTI_ULTI_LAUNCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunchClass))

typedef struct _UltiUltiLaunch UltiUltiLaunch;
typedef struct _UltiUltiLaunchClass UltiUltiLaunchClass;

struct _UltiUltiPanel {
	GtkBin parent_instance;
	UltiUltiPanelPrivate * priv;
	gboolean has_activated;
};

struct _UltiUltiPanelClass {
	GtkBinClass parent_class;
};

struct _UltiUltiPanelPrivate {
	GtkBox* vbox;
};


static gpointer ulti_ulti_panel_parent_class = NULL;
extern UltiUltipost* ulti_ulti_panel_post;
UltiUltipost* ulti_ulti_panel_post = NULL;
extern UltiUltiLaunch* ulti_ulti_panel_launcher;
UltiUltiLaunch* ulti_ulti_panel_launcher = NULL;

GType ulti_ulti_panel_get_type (void) G_GNUC_CONST;
#define ULTI_ULTI_PANEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), ULTI_TYPE_ULTI_PANEL, UltiUltiPanelPrivate))
enum  {
	ULTI_ULTI_PANEL_DUMMY_PROPERTY
};
GType ulti_ultipost_get_type (void) G_GNUC_CONST;
GType ulti_ulti_launch_get_type (void) G_GNUC_CONST;
UltiUltiLaunch* ulti_ulti_launch_new (void);
UltiUltiLaunch* ulti_ulti_launch_construct (GType object_type);
static gboolean ulti_ulti_panel_real_draw (GtkWidget* base, cairo_t* cr);
UltiUltiPanel* ulti_ulti_panel_new (GtkWidget* btn);
UltiUltiPanel* ulti_ulti_panel_construct (GType object_type, GtkWidget* btn);
UltiUltipost* ulti_ultipost_new (GtkWidget* BtnTask, UltiUltiPanel* panel);
UltiUltipost* ulti_ultipost_construct (GType object_type, GtkWidget* BtnTask, UltiUltiPanel* panel);
void ulti_ulti_launch_vanish (UltiUltiLaunch* self);
static void ulti_ulti_panel_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gboolean ulti_ulti_panel_real_draw (GtkWidget* base, cairo_t* cr) {
	UltiUltiPanel * self;
	gboolean result = FALSE;
	GtkStyleContext* st = NULL;
	GtkStyleContext* _tmp0_ = NULL;
	GtkStyleContext* _tmp1_ = NULL;
	cairo_t* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	cairo_t* _tmp5_ = NULL;
	gboolean _tmp6_ = FALSE;
	self = (UltiUltiPanel*) base;
	g_return_val_if_fail (cr != NULL, FALSE);
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	_tmp1_ = _g_object_ref0 (_tmp0_);
	st = _tmp1_;
	_tmp2_ = cr;
	_tmp3_ = gtk_widget_get_allocated_width ((GtkWidget*) self);
	_tmp4_ = gtk_widget_get_allocated_height ((GtkWidget*) self);
	gtk_render_background (st, _tmp2_, (gdouble) 0, (gdouble) 0, (gdouble) _tmp3_, (gdouble) _tmp4_);
	_tmp5_ = cr;
	_tmp6_ = GTK_WIDGET_CLASS (ulti_ulti_panel_parent_class)->draw ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_bin_get_type (), GtkBin), _tmp5_);
	result = _tmp6_;
	_g_object_unref0 (st);
	return result;
}


UltiUltiPanel* ulti_ulti_panel_construct (GType object_type, GtkWidget* btn) {
	UltiUltiPanel * self = NULL;
	GtkBox* _tmp0_ = NULL;
	GtkWidget* _tmp1_ = NULL;
	UltiUltipost* _tmp2_ = NULL;
	GtkBox* _tmp3_ = NULL;
	UltiUltipost* _tmp4_ = NULL;
	UltiUltiLaunch* _tmp5_ = NULL;
	g_return_val_if_fail (btn != NULL, NULL);
	self = (UltiUltiPanel*) g_object_new (object_type, NULL);
	_tmp0_ = self->priv->vbox;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp0_);
	_tmp1_ = btn;
	_tmp2_ = ulti_ultipost_new (_tmp1_, self);
	g_object_ref_sink (_tmp2_);
	_g_object_unref0 (ulti_ulti_panel_post);
	ulti_ulti_panel_post = _tmp2_;
	_tmp3_ = self->priv->vbox;
	_tmp4_ = ulti_ulti_panel_post;
	gtk_box_pack_start (_tmp3_, (GtkWidget*) _tmp4_, FALSE, TRUE, (guint) 0);
	_tmp5_ = ulti_ulti_panel_launcher;
	ulti_ulti_launch_vanish (_tmp5_);
	gtk_widget_show ((GtkWidget*) self);
	return self;
}


UltiUltiPanel* ulti_ulti_panel_new (GtkWidget* btn) {
	return ulti_ulti_panel_construct (ULTI_TYPE_ULTI_PANEL, btn);
}


static void ulti_ulti_panel_class_init (UltiUltiPanelClass * klass) {
	UltiUltiLaunch* _tmp0_ = NULL;
	ulti_ulti_panel_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (UltiUltiPanelPrivate));
	((GtkWidgetClass *) klass)->draw = ulti_ulti_panel_real_draw;
	G_OBJECT_CLASS (klass)->finalize = ulti_ulti_panel_finalize;
	_tmp0_ = ulti_ulti_launch_new ();
	g_object_ref_sink (_tmp0_);
	ulti_ulti_panel_launcher = _tmp0_;
}


static void ulti_ulti_panel_instance_init (UltiUltiPanel * self) {
	GtkBox* _tmp0_ = NULL;
	self->priv = ULTI_ULTI_PANEL_GET_PRIVATE (self);
	_tmp0_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 1);
	g_object_ref_sink (_tmp0_);
	self->priv->vbox = _tmp0_;
	self->has_activated = FALSE;
}


static void ulti_ulti_panel_finalize (GObject* obj) {
	UltiUltiPanel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ULTI_TYPE_ULTI_PANEL, UltiUltiPanel);
	_g_object_unref0 (self->priv->vbox);
	G_OBJECT_CLASS (ulti_ulti_panel_parent_class)->finalize (obj);
}


GType ulti_ulti_panel_get_type (void) {
	static volatile gsize ulti_ulti_panel_type_id__volatile = 0;
	if (g_once_init_enter (&ulti_ulti_panel_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (UltiUltiPanelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) ulti_ulti_panel_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (UltiUltiPanel), 0, (GInstanceInitFunc) ulti_ulti_panel_instance_init, NULL };
		GType ulti_ulti_panel_type_id;
		ulti_ulti_panel_type_id = g_type_register_static (gtk_bin_get_type (), "UltiUltiPanel", &g_define_type_info, 0);
		g_once_init_leave (&ulti_ulti_panel_type_id__volatile, ulti_ulti_panel_type_id);
	}
	return ulti_ulti_panel_type_id__volatile;
}



