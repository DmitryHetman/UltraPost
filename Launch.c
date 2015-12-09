/* Launch.c generated by valac 0.30.0, the Vala compiler
 * generated from Launch.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <gio/gio.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#define ULTI_TYPE_ULTI_LAUNCH (ulti_ulti_launch_get_type ())
#define ULTI_ULTI_LAUNCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunch))
#define ULTI_ULTI_LAUNCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunchClass))
#define ULTI_IS_ULTI_LAUNCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ULTI_TYPE_ULTI_LAUNCH))
#define ULTI_IS_ULTI_LAUNCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ULTI_TYPE_ULTI_LAUNCH))
#define ULTI_ULTI_LAUNCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunchClass))

typedef struct _UltiUltiLaunch UltiUltiLaunch;
typedef struct _UltiUltiLaunchClass UltiUltiLaunchClass;
typedef struct _UltiUltiLaunchPrivate UltiUltiLaunchPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _Block1Data Block1Data;
#define _g_free0(var) (var = (g_free (var), NULL))
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))

#define ULTI_TYPE_ULTIPOST (ulti_ultipost_get_type ())
#define ULTI_ULTIPOST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ULTI_TYPE_ULTIPOST, UltiUltipost))
#define ULTI_ULTIPOST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ULTI_TYPE_ULTIPOST, UltiUltipostClass))
#define ULTI_IS_ULTIPOST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ULTI_TYPE_ULTIPOST))
#define ULTI_IS_ULTIPOST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ULTI_TYPE_ULTIPOST))
#define ULTI_ULTIPOST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ULTI_TYPE_ULTIPOST, UltiUltipostClass))

typedef struct _UltiUltipost UltiUltipost;
typedef struct _UltiUltipostClass UltiUltipostClass;
typedef struct _UltiUltipostPrivate UltiUltipostPrivate;

#define ULTI_TYPE_ULTI_PANEL (ulti_ulti_panel_get_type ())
#define ULTI_ULTI_PANEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ULTI_TYPE_ULTI_PANEL, UltiUltiPanel))
#define ULTI_ULTI_PANEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ULTI_TYPE_ULTI_PANEL, UltiUltiPanelClass))
#define ULTI_IS_ULTI_PANEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ULTI_TYPE_ULTI_PANEL))
#define ULTI_IS_ULTI_PANEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ULTI_TYPE_ULTI_PANEL))
#define ULTI_ULTI_PANEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ULTI_TYPE_ULTI_PANEL, UltiUltiPanelClass))

typedef struct _UltiUltiPanel UltiUltiPanel;
typedef struct _UltiUltiPanelClass UltiUltiPanelClass;

#define ULTI_TYPE_ACTION_MENU (ulti_action_menu_get_type ())
#define ULTI_ACTION_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ULTI_TYPE_ACTION_MENU, UltiActionMenu))
#define ULTI_ACTION_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ULTI_TYPE_ACTION_MENU, UltiActionMenuClass))
#define ULTI_IS_ACTION_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ULTI_TYPE_ACTION_MENU))
#define ULTI_IS_ACTION_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ULTI_TYPE_ACTION_MENU))
#define ULTI_ACTION_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ULTI_TYPE_ACTION_MENU, UltiActionMenuClass))

typedef struct _UltiActionMenu UltiActionMenu;
typedef struct _UltiActionMenuClass UltiActionMenuClass;

struct _UltiUltiLaunch {
	GtkWindow parent_instance;
	UltiUltiLaunchPrivate * priv;
};

struct _UltiUltiLaunchClass {
	GtkWindowClass parent_class;
};

struct _UltiUltiLaunchPrivate {
	GdkPixbuf* file_pixbuf;
	GAppInfoMonitor* monitor;
	GtkListStore* store;
	GdkScreen* screen;
};

struct _Block1Data {
	int _ref_count_;
	UltiUltiLaunch* self;
	GtkIconTheme* theme;
};

struct _UltiUltipost {
	GtkBin parent_instance;
	UltiUltipostPrivate * priv;
	GtkToggleButton* Launch;
	GtkToggleButton* Action;
	UltiUltiPanel* p;
	UltiActionMenu* action;
};

struct _UltiUltipostClass {
	GtkBinClass parent_class;
};


static gpointer ulti_ulti_launch_parent_class = NULL;
extern UltiUltipost* ulti_ulti_panel_post;

GType ulti_ulti_launch_get_type (void) G_GNUC_CONST;
#define ULTI_ULTI_LAUNCH_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunchPrivate))
enum  {
	ULTI_ULTI_LAUNCH_DUMMY_PROPERTY
};
static GdkPixbuf* ulti_ulti_launch_find_icon (UltiUltiLaunch* self, const gchar* name, GtkIconTheme* theme);
static void ulti_ulti_launch_fill_store (UltiUltiLaunch* self);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda4_ (Block1Data* _data1_, GAppInfo* appinfo);
static void ___lambda4__gfunc (gconstpointer data, gpointer self);
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
static void ulti_ulti_launch_appchanged (UltiUltiLaunch* self);
static void ulti_ulti_launch_icon_activate (UltiUltiLaunch* self, GtkTreePath* path);
GType ulti_ultipost_get_type (void) G_GNUC_CONST;
GType ulti_ulti_panel_get_type (void) G_GNUC_CONST;
GType ulti_action_menu_get_type (void) G_GNUC_CONST;
void ulti_ulti_launch_vanish (UltiUltiLaunch* self);
void ulti_ulti_launch_appear (UltiUltiLaunch* self);
UltiUltiLaunch* ulti_ulti_launch_new (void);
UltiUltiLaunch* ulti_ulti_launch_construct (GType object_type);
static void _ulti_ulti_launch_appchanged_g_app_info_monitor_changed (GAppInfoMonitor* _sender, gpointer self);
static void _ulti_ulti_launch_icon_activate_gtk_icon_view_item_activated (GtkIconView* _sender, GtkTreePath* path, gpointer self);
static void ulti_ulti_launch_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static GdkPixbuf* ulti_ulti_launch_find_icon (UltiUltiLaunch* self, const gchar* name, GtkIconTheme* theme) {
	GdkPixbuf* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (theme != NULL, NULL);
	{
		GdkPixbuf* icon_px = NULL;
		GdkPixbuf* _tmp0_ = NULL;
		GtkIconTheme* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		GdkPixbuf* _tmp3_ = NULL;
		GdkPixbuf* _tmp4_ = NULL;
		GdkPixbuf* _tmp5_ = NULL;
		GdkPixbuf* _tmp6_ = NULL;
		_tmp1_ = theme;
		_tmp2_ = name;
		_tmp3_ = gtk_icon_theme_load_icon (_tmp1_, _tmp2_, 64, GTK_ICON_LOOKUP_FORCE_SVG, &_inner_error_);
		_tmp0_ = _tmp3_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_object_unref0 (icon_px);
			goto __catch0_g_error;
		}
		_tmp4_ = _tmp0_;
		_tmp0_ = NULL;
		_g_object_unref0 (icon_px);
		icon_px = _tmp4_;
		_tmp5_ = icon_px;
		_tmp6_ = gdk_pixbuf_scale_simple (_tmp5_, 64, 64, GDK_INTERP_BILINEAR);
		_g_object_unref0 (icon_px);
		icon_px = _tmp6_;
		result = icon_px;
		_g_object_unref0 (_tmp0_);
		return result;
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GdkPixbuf* _tmp7_ = NULL;
		GdkPixbuf* _tmp8_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp7_ = self->priv->file_pixbuf;
		_tmp8_ = gdk_pixbuf_scale_simple (_tmp7_, 64, 64, GDK_INTERP_BILINEAR);
		result = _tmp8_;
		_g_error_free0 (e);
		return result;
	}
	__finally0:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return NULL;
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		UltiUltiLaunch* self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->theme);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void __lambda4_ (Block1Data* _data1_, GAppInfo* appinfo) {
	UltiUltiLaunch* self;
	GAppInfo* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	self = _data1_->self;
	g_return_if_fail (appinfo != NULL);
	_tmp0_ = appinfo;
	_tmp1_ = g_app_info_should_show (_tmp0_);
	if (_tmp1_) {
		GtkTreeIter iter = {0};
		gchar* name = NULL;
		gchar* icon = NULL;
		gchar* disc = NULL;
		GdkPixbuf* icon_px = NULL;
		gchar* _tmp2_ = NULL;
		GAppInfo* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GAppInfo* _tmp6_ = NULL;
		GIcon* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		GdkPixbuf* _tmp10_ = NULL;
		GtkListStore* _tmp11_ = NULL;
		GtkTreeIter _tmp12_ = {0};
		GtkListStore* _tmp13_ = NULL;
		GtkTreeIter _tmp14_ = {0};
		const gchar* _tmp15_ = NULL;
		const gchar* _tmp16_ = NULL;
		GdkPixbuf* _tmp17_ = NULL;
		GAppInfo* _tmp18_ = NULL;
		_tmp2_ = g_strdup ("");
		_g_free0 (name);
		name = _tmp2_;
		_tmp3_ = appinfo;
		_tmp4_ = g_app_info_get_description (_tmp3_);
		_tmp5_ = g_strdup (_tmp4_);
		_g_free0 (disc);
		disc = _tmp5_;
		_tmp6_ = appinfo;
		_tmp7_ = g_app_info_get_icon (_tmp6_);
		_tmp8_ = g_icon_to_string (_tmp7_);
		_g_free0 (icon);
		icon = _tmp8_;
		_tmp9_ = icon;
		_tmp10_ = ulti_ulti_launch_find_icon (self, _tmp9_, _data1_->theme);
		_g_object_unref0 (icon_px);
		icon_px = _tmp10_;
		_tmp11_ = self->priv->store;
		gtk_list_store_append (_tmp11_, &_tmp12_);
		iter = _tmp12_;
		_tmp13_ = self->priv->store;
		_tmp14_ = iter;
		_tmp15_ = disc;
		_tmp16_ = name;
		_tmp17_ = icon_px;
		_tmp18_ = appinfo;
		gtk_list_store_set (_tmp13_, &_tmp14_, 0, _tmp15_, 1, _tmp16_, 2, _tmp17_, 3, _tmp18_, -1);
		_g_object_unref0 (icon_px);
		_g_free0 (disc);
		_g_free0 (icon);
		_g_free0 (name);
	}
}


static void ___lambda4__gfunc (gconstpointer data, gpointer self) {
	__lambda4_ (self, (GAppInfo*) data);
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_list_free__g_object_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_list_free (self);
}


static void ulti_ulti_launch_fill_store (UltiUltiLaunch* self) {
	Block1Data* _data1_;
	GtkIconTheme* _tmp0_ = NULL;
	GtkIconTheme* _tmp1_ = NULL;
	GtkListStore* _tmp2_ = NULL;
	GList* infolist = NULL;
	GList* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_data1_->self = g_object_ref (self);
	_tmp0_ = gtk_icon_theme_get_default ();
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_data1_->theme = _tmp1_;
	_tmp2_ = self->priv->store;
	gtk_list_store_clear (_tmp2_);
	_tmp3_ = g_app_info_get_all ();
	infolist = _tmp3_;
	g_list_foreach (infolist, ___lambda4__gfunc, _data1_);
	__g_list_free__g_object_unref0_0 (infolist);
	block1_data_unref (_data1_);
	_data1_ = NULL;
}


static void ulti_ulti_launch_appchanged (UltiUltiLaunch* self) {
	g_return_if_fail (self != NULL);
	ulti_ulti_launch_fill_store (self);
}


static void ulti_ulti_launch_icon_activate (UltiUltiLaunch* self, GtkTreePath* path) {
	UltiUltipost* _tmp11_ = NULL;
	GtkToggleButton* _tmp12_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (path != NULL);
	{
		GtkTreeIter iter = {0};
		GtkListStore* _tmp0_ = NULL;
		GtkTreePath* _tmp1_ = NULL;
		GtkTreeIter _tmp2_ = {0};
		GValue info_v = {0};
		GtkListStore* _tmp3_ = NULL;
		GtkTreeIter _tmp4_ = {0};
		GValue _tmp5_ = {0};
		GAppInfo* info = NULL;
		GValue _tmp6_ = {0};
		GAppInfo* _tmp7_ = NULL;
		_tmp0_ = self->priv->store;
		_tmp1_ = path;
		gtk_tree_model_get_iter ((GtkTreeModel*) _tmp0_, &_tmp2_, _tmp1_);
		iter = _tmp2_;
		_tmp3_ = self->priv->store;
		_tmp4_ = iter;
		gtk_tree_model_get_value ((GtkTreeModel*) _tmp3_, &_tmp4_, 3, &_tmp5_);
		G_IS_VALUE (&info_v) ? (g_value_unset (&info_v), NULL) : NULL;
		info_v = _tmp5_;
		_tmp6_ = info_v;
		_tmp7_ = _g_object_ref0 (g_value_get_object (&_tmp6_));
		info = _tmp7_;
		g_app_info_launch (info, NULL, NULL, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_object_unref0 (info);
			G_IS_VALUE (&info_v) ? (g_value_unset (&info_v), NULL) : NULL;
			goto __catch1_g_error;
		}
		_g_object_unref0 (info);
		G_IS_VALUE (&info_v) ? (g_value_unset (&info_v), NULL) : NULL;
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* e = NULL;
		FILE* _tmp8_ = NULL;
		GError* _tmp9_ = NULL;
		const gchar* _tmp10_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp8_ = stderr;
		_tmp9_ = e;
		_tmp10_ = _tmp9_->message;
		fprintf (_tmp8_, "Could not load icon: %s\n", _tmp10_);
		_g_error_free0 (e);
	}
	__finally1:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp11_ = ulti_ulti_panel_post;
	_tmp12_ = _tmp11_->Launch;
	gtk_toggle_button_set_active (_tmp12_, FALSE);
}


void ulti_ulti_launch_vanish (UltiUltiLaunch* self) {
	g_return_if_fail (self != NULL);
	gtk_widget_hide ((GtkWidget*) self);
}


void ulti_ulti_launch_appear (UltiUltiLaunch* self) {
	g_return_if_fail (self != NULL);
	gtk_widget_show_all ((GtkWidget*) self);
}


static void _ulti_ulti_launch_appchanged_g_app_info_monitor_changed (GAppInfoMonitor* _sender, gpointer self) {
	ulti_ulti_launch_appchanged ((UltiUltiLaunch*) self);
}


static void _ulti_ulti_launch_icon_activate_gtk_icon_view_item_activated (GtkIconView* _sender, GtkTreePath* path, gpointer self) {
	ulti_ulti_launch_icon_activate ((UltiUltiLaunch*) self, path);
}


UltiUltiLaunch* ulti_ulti_launch_construct (GType object_type) {
	UltiUltiLaunch * self = NULL;
	GtkListStore* _tmp0_ = NULL;
	GAppInfoMonitor* _tmp1_ = NULL;
	GtkIconView* iconview = NULL;
	GtkIconView* _tmp2_ = NULL;
	GtkListStore* _tmp3_ = NULL;
	GdkScreen* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	GtkScrolledWindow* sw = NULL;
	GtkScrolledWindow* _tmp6_ = NULL;
	GtkBox* box = NULL;
	GtkBox* _tmp7_ = NULL;
	self = (UltiUltiLaunch*) g_object_new (object_type, NULL);
	gtk_window_set_decorated ((GtkWindow*) self, FALSE);
	gtk_window_maximize ((GtkWindow*) self);
	_tmp0_ = self->priv->store;
	gtk_tree_sortable_set_sort_column_id ((GtkTreeSortable*) _tmp0_, 1, GTK_SORT_ASCENDING);
	ulti_ulti_launch_fill_store (self);
	_tmp1_ = self->priv->monitor;
	g_signal_connect_object (_tmp1_, "changed", (GCallback) _ulti_ulti_launch_appchanged_g_app_info_monitor_changed, self, 0);
	_tmp2_ = (GtkIconView*) gtk_icon_view_new ();
	g_object_ref_sink (_tmp2_);
	iconview = _tmp2_;
	_tmp3_ = self->priv->store;
	gtk_icon_view_set_model (iconview, (GtkTreeModel*) _tmp3_);
	gtk_icon_view_set_row_spacing (iconview, 20);
	_tmp4_ = self->priv->screen;
	_tmp5_ = gdk_screen_get_width (_tmp4_);
	gtk_icon_view_set_item_width (iconview, _tmp5_ / 10);
	gtk_icon_view_set_margin (iconview, 30);
	gtk_icon_view_set_activate_on_single_click (iconview, TRUE);
	gtk_icon_view_set_selection_mode (iconview, GTK_SELECTION_SINGLE);
	gtk_icon_view_set_text_column (iconview, 1);
	gtk_icon_view_set_pixbuf_column (iconview, 2);
	gtk_icon_view_set_tooltip_column (iconview, 0);
	g_signal_connect_object (iconview, "item-activated", (GCallback) _ulti_ulti_launch_icon_activate_gtk_icon_view_item_activated, self, 0);
	_tmp6_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
	g_object_ref_sink (_tmp6_);
	sw = _tmp6_;
	gtk_scrolled_window_set_policy (sw, GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
	gtk_container_add ((GtkContainer*) sw, (GtkWidget*) iconview);
	_tmp7_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 1);
	g_object_ref_sink (_tmp7_);
	box = _tmp7_;
	gtk_box_pack_end (box, (GtkWidget*) sw, TRUE, TRUE, (guint) 0);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) box);
	_g_object_unref0 (box);
	_g_object_unref0 (sw);
	_g_object_unref0 (iconview);
	return self;
}


UltiUltiLaunch* ulti_ulti_launch_new (void) {
	return ulti_ulti_launch_construct (ULTI_TYPE_ULTI_LAUNCH);
}


static void ulti_ulti_launch_class_init (UltiUltiLaunchClass * klass) {
	ulti_ulti_launch_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (UltiUltiLaunchPrivate));
	G_OBJECT_CLASS (klass)->finalize = ulti_ulti_launch_finalize;
}


static void ulti_ulti_launch_instance_init (UltiUltiLaunch * self) {
	GAppInfoMonitor* _tmp0_ = NULL;
	GtkListStore* _tmp1_ = NULL;
	GdkScreen* _tmp2_ = NULL;
	GdkScreen* _tmp3_ = NULL;
	self->priv = ULTI_ULTI_LAUNCH_GET_PRIVATE (self);
	_tmp0_ = g_app_info_monitor_get ();
	self->priv->monitor = _tmp0_;
	_tmp1_ = gtk_list_store_new (4, G_TYPE_STRING, G_TYPE_STRING, GDK_TYPE_PIXBUF, g_app_info_get_type (), -1);
	self->priv->store = _tmp1_;
	_tmp2_ = gdk_screen_get_default ();
	_tmp3_ = _g_object_ref0 (_tmp2_);
	self->priv->screen = _tmp3_;
}


static void ulti_ulti_launch_finalize (GObject* obj) {
	UltiUltiLaunch * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, ULTI_TYPE_ULTI_LAUNCH, UltiUltiLaunch);
	_g_object_unref0 (self->priv->file_pixbuf);
	_g_object_unref0 (self->priv->monitor);
	_g_object_unref0 (self->priv->store);
	_g_object_unref0 (self->priv->screen);
	G_OBJECT_CLASS (ulti_ulti_launch_parent_class)->finalize (obj);
}


GType ulti_ulti_launch_get_type (void) {
	static volatile gsize ulti_ulti_launch_type_id__volatile = 0;
	if (g_once_init_enter (&ulti_ulti_launch_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (UltiUltiLaunchClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) ulti_ulti_launch_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (UltiUltiLaunch), 0, (GInstanceInitFunc) ulti_ulti_launch_instance_init, NULL };
		GType ulti_ulti_launch_type_id;
		ulti_ulti_launch_type_id = g_type_register_static (gtk_window_get_type (), "UltiUltiLaunch", &g_define_type_info, 0);
		g_once_init_leave (&ulti_ulti_launch_type_id__volatile, ulti_ulti_launch_type_id);
	}
	return ulti_ulti_launch_type_id__volatile;
}


