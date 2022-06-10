
#include "gradient_popup.h"

//tool;
signal updated(value);

void GradientPopup::init(const Variant &value, const Variant &graph_node, const Variant &undo_redo) {
	$Panel / Control.set_undo_redo(undo_redo);
	$Panel / Control.graph_node = graph_node;
	$Panel / Control.set_value(value);
}

void GradientPopup::_on_Control_updated(const Variant &value) {
	emit_signal("updated", value);
}

void GradientPopup::_on_GradientPopup_popup_hide() {
	queue_free();
}
}

GradientPopup::GradientPopup() {
	//Script: res://addons/mat_maker_gd/widgets/gradient_editor/gradient_popup.gd
	Popup *gradientpopup = memnew(Popup);
	gradientpopup->set_name("GradientPopup");

	gradientpopup->set_name("GradientPopup");
	//gradientpopup->set("name", GradientPopup));

	gradientpopup->set_filename("res://addons/mat_maker_gd/widgets/gradient_editor/gradient_popup.tscn");
	//gradientpopup->set("filename", "res://addons/mat_maker_gd/widgets/gradient_editor/gradient_popup.tscn");

	gradientpopup->set_margin_right(632);
	//gradientpopup->set("margin_right", 632);

	gradientpopup->set_margin_bottom(49);
	//gradientpopup->set("margin_bottom", 49);

	gradientpopup->set_rect_size(Vector2(632, 49));
	//gradientpopup->set("rect_size", Vector2(632, 49));

	gradientpopup->set_size_flags_horizontal(0);
	//gradientpopup->set("size_flags_horizontal", 0);

	gradientpopup->set_size_flags_vertical(0);
	//gradientpopup->set("size_flags_vertical", 0);

	Panel *panel_gradientpopup = memnew(Panel);
	panel_gradientpopup->set_name("Panel");
	gradientpopup->add_child(panel_gradientpopup);

	panel_gradientpopup->set_name("Panel");
	//panel_gradientpopup->set("name", Panel));

	//panel_gradientpopup property owner TYPE_OBJECT value: GradientPopup:[Popup:51440]

	panel_gradientpopup->set_margin_right(632);
	//panel_gradientpopup->set("margin_right", 632);

	panel_gradientpopup->set_margin_bottom(49);
	//panel_gradientpopup->set("margin_bottom", 49);

	panel_gradientpopup->set_rect_size(Vector2(632, 49));
	//panel_gradientpopup->set("rect_size", Vector2(632, 49));

	//panel_gradientpopup property custom_styles/panel TYPE_OBJECT value: [StyleBoxFlat:51436]
	Ref<StyleBoxFlat> panel_gradientpopup_prop_custom_styles / panel;
	panel_gradientpopup_prop_custom_styles / panel.instance();
	panel_gradientpopup->set_custom_styles / panel(panel_gradientpopup_prop_custom_styles / panel);
	//panel_gradientpopup->set("custom_styles/panel", panel_gradientpopup_prop_custom_styles/panel);

	//Script: res://addons/mat_maker_gd/widgets/gradient_editor/gradient_editor.gd
	Control *control_panel_gradientpopup = memnew(Control);
	control_panel_gradientpopup->set_name("Control");
	panel_gradientpopup->add_child(control_panel_gradientpopup);

	control_panel_gradientpopup->set_name("Control");
	//control_panel_gradientpopup->set("name", Control));

	control_panel_gradientpopup->set_filename("res://addons/mat_maker_gd/widgets/gradient_editor/gradient_editor.tscn");
	//control_panel_gradientpopup->set("filename", "res://addons/mat_maker_gd/widgets/gradient_editor/gradient_editor.tscn");

	//control_panel_gradientpopup property owner TYPE_OBJECT value: GradientPopup:[Popup:51440]

	control_panel_gradientpopup->set_anchor_right(1);
	//control_panel_gradientpopup->set("anchor_right", 1);

	control_panel_gradientpopup->set_anchor_bottom(1);
	//control_panel_gradientpopup->set("anchor_bottom", 1);

	control_panel_gradientpopup->set_margin_left(10);
	//control_panel_gradientpopup->set("margin_left", 10);

	control_panel_gradientpopup->set_margin_top(10);
	//control_panel_gradientpopup->set("margin_top", 10);

	control_panel_gradientpopup->set_margin_right(-10);
	//control_panel_gradientpopup->set("margin_right", -10);

	control_panel_gradientpopup->set_margin_bottom(-10);
	//control_panel_gradientpopup->set("margin_bottom", -10);

	control_panel_gradientpopup->set_rect_position(Vector2(10, 10));
	//control_panel_gradientpopup->set("rect_position", Vector2(10, 10));

	control_panel_gradientpopup->set_rect_global_position(Vector2(10, 10));
	//control_panel_gradientpopup->set("rect_global_position", Vector2(10, 10));

	control_panel_gradientpopup->set_rect_min_size(Vector2(120, 32));
	//control_panel_gradientpopup->set("rect_min_size", Vector2(120, 32));

	control_panel_gradientpopup->set_focus_mode(1);
	//control_panel_gradientpopup->set("focus_mode", 1);

	control_panel_gradientpopup->set_embedded(False);
	//control_panel_gradientpopup->set("embedded", False);

	ColorRect *background_control_panel_gradientpopup = memnew(ColorRect);
	background_control_panel_gradientpopup->set_name("Background");
	control_panel_gradientpopup->add_child(background_control_panel_gradientpopup);

	background_control_panel_gradientpopup->set_name("Background");
	//background_control_panel_gradientpopup->set("name", Background));

	//background_control_panel_gradientpopup property owner TYPE_OBJECT value: Control:[Control:51442]

	//background_control_panel_gradientpopup property material TYPE_OBJECT value: [ShaderMaterial:19166]
	Ref<ShaderMaterial> background_control_panel_gradientpopup_prop_material;
	background_control_panel_gradientpopup_prop_material.instance();
	background_control_panel_gradientpopup->set_material(background_control_panel_gradientpopup_prop_material);
	//background_control_panel_gradientpopup->set("material", background_control_panel_gradientpopup_prop_material);

	background_control_panel_gradientpopup->set_anchor_right(1);
	//background_control_panel_gradientpopup->set("anchor_right", 1);

	background_control_panel_gradientpopup->set_margin_left(4);
	//background_control_panel_gradientpopup->set("margin_left", 4);

	background_control_panel_gradientpopup->set_margin_right(-4);
	//background_control_panel_gradientpopup->set("margin_right", -4);

	background_control_panel_gradientpopup->set_margin_bottom(15);
	//background_control_panel_gradientpopup->set("margin_bottom", 15);

	background_control_panel_gradientpopup->set_rect_position(Vector2(4, 0));
	//background_control_panel_gradientpopup->set("rect_position", Vector2(4, 0));

	background_control_panel_gradientpopup->set_rect_global_position(Vector2(4, 0));
	//background_control_panel_gradientpopup->set("rect_global_position", Vector2(4, 0));

	background_control_panel_gradientpopup->set_rect_size(Vector2(0, 15));
	//background_control_panel_gradientpopup->set("rect_size", Vector2(0, 15));

	background_control_panel_gradientpopup->set_rect_min_size(Vector2(112, 17));
	//background_control_panel_gradientpopup->set("rect_min_size", Vector2(112, 17));

	background_control_panel_gradientpopup->set_mouse_filter(2);
	//background_control_panel_gradientpopup->set("mouse_filter", 2);

	//background_control_panel_gradientpopup property __meta__ TYPE_DICTIONARY value: {_edit_use_anchors_:False}

	TextureRect *gradient_control_panel_gradientpopup = memnew(TextureRect);
	gradient_control_panel_gradientpopup->set_name("Gradient");
	control_panel_gradientpopup->add_child(gradient_control_panel_gradientpopup);

	gradient_control_panel_gradientpopup->set_name("Gradient");
	//gradient_control_panel_gradientpopup->set("name", Gradient));

	//gradient_control_panel_gradientpopup property owner TYPE_OBJECT value: Control:[Control:51442]

	gradient_control_panel_gradientpopup->set_anchor_right(1);
	//gradient_control_panel_gradientpopup->set("anchor_right", 1);

	gradient_control_panel_gradientpopup->set_margin_left(4);
	//gradient_control_panel_gradientpopup->set("margin_left", 4);

	gradient_control_panel_gradientpopup->set_margin_right(-4);
	//gradient_control_panel_gradientpopup->set("margin_right", -4);

	gradient_control_panel_gradientpopup->set_margin_bottom(15);
	//gradient_control_panel_gradientpopup->set("margin_bottom", 15);

	gradient_control_panel_gradientpopup->set_rect_position(Vector2(4, 0));
	//gradient_control_panel_gradientpopup->set("rect_position", Vector2(4, 0));

	gradient_control_panel_gradientpopup->set_rect_global_position(Vector2(4, 0));
	//gradient_control_panel_gradientpopup->set("rect_global_position", Vector2(4, 0));

	gradient_control_panel_gradientpopup->set_rect_size(Vector2(0, 15));
	//gradient_control_panel_gradientpopup->set("rect_size", Vector2(0, 15));

	gradient_control_panel_gradientpopup->set_rect_min_size(Vector2(112, 17));
	//gradient_control_panel_gradientpopup->set("rect_min_size", Vector2(112, 17));

	gradient_control_panel_gradientpopup->set_mouse_filter(2);
	//gradient_control_panel_gradientpopup->set("mouse_filter", 2);

	//gradient_control_panel_gradientpopup property theme TYPE_OBJECT value: [Theme:19167]
	Ref<Theme> gradient_control_panel_gradientpopup_prop_theme;
	gradient_control_panel_gradientpopup_prop_theme.instance();
	gradient_control_panel_gradientpopup->set_theme(gradient_control_panel_gradientpopup_prop_theme);
	//gradient_control_panel_gradientpopup->set("theme", gradient_control_panel_gradientpopup_prop_theme);

	//gradient_control_panel_gradientpopup property __meta__ TYPE_DICTIONARY value: {_edit_use_anchors_:False}

	OptionButton *interpolation_control_panel_gradientpopup = memnew(OptionButton);
	interpolation_control_panel_gradientpopup->set_name("Interpolation");
	control_panel_gradientpopup->add_child(interpolation_control_panel_gradientpopup);

	interpolation_control_panel_gradientpopup->set_name("Interpolation");
	//interpolation_control_panel_gradientpopup->set("name", Interpolation));

	//interpolation_control_panel_gradientpopup property owner TYPE_OBJECT value: Control:[Control:51442]

	interpolation_control_panel_gradientpopup->set_margin_left(0.418457);
	//interpolation_control_panel_gradientpopup->set("margin_left", 0.418457);

	interpolation_control_panel_gradientpopup->set_margin_top(-2.90374);
	//interpolation_control_panel_gradientpopup->set("margin_top", -2.90374);

	interpolation_control_panel_gradientpopup->set_margin_right(73.418503);
	//interpolation_control_panel_gradientpopup->set("margin_right", 73.418503);

	interpolation_control_panel_gradientpopup->set_margin_bottom(19.0963);
	//interpolation_control_panel_gradientpopup->set("margin_bottom", 19.0963);

	interpolation_control_panel_gradientpopup->set_rect_position(Vector2(0.418457, -2.90374));
	//interpolation_control_panel_gradientpopup->set("rect_position", Vector2(0.418457, -2.90374));

	interpolation_control_panel_gradientpopup->set_rect_global_position(Vector2(0.418457, -2.90374));
	//interpolation_control_panel_gradientpopup->set("rect_global_position", Vector2(0.418457, -2.90374));

	interpolation_control_panel_gradientpopup->set_rect_size(Vector2(73.000046, 22.00004));
	//interpolation_control_panel_gradientpopup->set("rect_size", Vector2(73.000046, 22.00004));

	interpolation_control_panel_gradientpopup->set_rect_scale(Vector2(0.5, 0.5));
	//interpolation_control_panel_gradientpopup->set("rect_scale", Vector2(0.5, 0.5));

	//interpolation_control_panel_gradientpopup property icon TYPE_OBJECT value: [AtlasTexture:19168]
	Ref<AtlasTexture> interpolation_control_panel_gradientpopup_prop_icon;
	interpolation_control_panel_gradientpopup_prop_icon.instance();
	interpolation_control_panel_gradientpopup->set_icon(interpolation_control_panel_gradientpopup_prop_icon);
	//interpolation_control_panel_gradientpopup->set("icon", interpolation_control_panel_gradientpopup_prop_icon);

	//interpolation_control_panel_gradientpopup property items TYPE_ARRAY value: [, [AtlasTexture:19169], False, 0, Null, , [AtlasTexture:19168], False, 1, Null, , [AtlasTexture:19170], False, 2, Null, , [AtlasTexture:19171], False, 3, Null]

	interpolation_control_panel_gradientpopup->set_selected(1);
	//interpolation_control_panel_gradientpopup->set("selected", 1);

	PopupMenu *popupmenu_interpolation_control_panel_gradientpopup = memnew(PopupMenu);
	popupmenu_interpolation_control_panel_gradientpopup->set_name("PopupMenu");
	interpolation_control_panel_gradientpopup->add_child(popupmenu_interpolation_control_panel_gradientpopup);

	popupmenu_interpolation_control_panel_gradientpopup->set_name("PopupMenu");
	//popupmenu_interpolation_control_panel_gradientpopup->set("name", PopupMenu));

	popupmenu_interpolation_control_panel_gradientpopup->set_input_pass_on_modal_close_click(False);
	//popupmenu_interpolation_control_panel_gradientpopup->set("input_pass_on_modal_close_click", False);

	//popupmenu_interpolation_control_panel_gradientpopup property items TYPE_ARRAY value: [, [AtlasTexture:19169], 2, False, False, 0, 0, Null, , False, , [AtlasTexture:19168], 2, True, False, 1, 0, Null, , False, , [AtlasTexture:19170], 2, False, False, 2, 0, Null, , False, , [AtlasTexture:19171], 2, False, False, 3, 0, Null, , False]

	popupmenu_interpolation_control_panel_gradientpopup->set_allow_search(True);
	//popupmenu_interpolation_control_panel_gradientpopup->set("allow_search", True);

	Timer *timer_popupmenu_interpolation_control_panel_gradientpopup = memnew(Timer);
	timer_popupmenu_interpolation_control_panel_gradientpopup->set_name("Timer");
	popupmenu_interpolation_control_panel_gradientpopup->add_child(timer_popupmenu_interpolation_control_panel_gradientpopup);

	timer_popupmenu_interpolation_control_panel_gradientpopup->set_name("Timer");
	//timer_popupmenu_interpolation_control_panel_gradientpopup->set("name", Timer));

	timer_popupmenu_interpolation_control_panel_gradientpopup->set_wait_time(0.3);
	//timer_popupmenu_interpolation_control_panel_gradientpopup->set("wait_time", 0.3);

	timer_popupmenu_interpolation_control_panel_gradientpopup->set_one_shot(True);
	//timer_popupmenu_interpolation_control_panel_gradientpopup->set("one_shot", True);

	Label *value_control_panel_gradientpopup = memnew(Label);
	value_control_panel_gradientpopup->set_name("Value");
	control_panel_gradientpopup->add_child(value_control_panel_gradientpopup);

	value_control_panel_gradientpopup->set_name("Value");
	//value_control_panel_gradientpopup->set("name", Value));

	//value_control_panel_gradientpopup property owner TYPE_OBJECT value: Control:[Control:51442]

	value_control_panel_gradientpopup->set_anchor_right(1);
	//value_control_panel_gradientpopup->set("anchor_right", 1);

	value_control_panel_gradientpopup->set_margin_top(-1);
	//value_control_panel_gradientpopup->set("margin_top", -1);

	value_control_panel_gradientpopup->set_margin_bottom(14);
	//value_control_panel_gradientpopup->set("margin_bottom", 14);

	value_control_panel_gradientpopup->set_rect_position(Vector2(0, -1));
	//value_control_panel_gradientpopup->set("rect_position", Vector2(0, -1));

	value_control_panel_gradientpopup->set_rect_global_position(Vector2(0, -1));
	//value_control_panel_gradientpopup->set("rect_global_position", Vector2(0, -1));

	value_control_panel_gradientpopup->set_rect_size(Vector2(0, 15));
	//value_control_panel_gradientpopup->set("rect_size", Vector2(0, 15));

	value_control_panel_gradientpopup->set_custom_colors / font_color(Color(1, 1, 1, 1));
	//value_control_panel_gradientpopup->set("custom_colors/font_color", Color(1, 1, 1, 1));

	value_control_panel_gradientpopup->set_custom_colors / font_color_shadow(Color(0, 0, 0, 1));
	//value_control_panel_gradientpopup->set("custom_colors/font_color_shadow", Color(0, 0, 0, 1));

	value_control_panel_gradientpopup->set_custom_constants / shadow_offset_x(1);
	//value_control_panel_gradientpopup->set("custom_constants/shadow_offset_x", 1);

	value_control_panel_gradientpopup->set_custom_constants / shadow_offset_y(1);
	//value_control_panel_gradientpopup->set("custom_constants/shadow_offset_y", 1);

	value_control_panel_gradientpopup->set_custom_constants / shadow_as_outline(1);
	//value_control_panel_gradientpopup->set("custom_constants/shadow_as_outline", 1);

	value_control_panel_gradientpopup->set_align(1);
	//value_control_panel_gradientpopup->set("align", 1);

	//value_control_panel_gradientpopup property __meta__ TYPE_DICTIONARY value: {_edit_use_anchors_:False}
}

GradientPopup::~GradientPopup() {
}

static void GradientPopup::_bind_methods() {
	ClassDB::bind_method(D_METHOD("init", "value", " graph_node", " undo_redo"), &GradientPopup::init);
	ClassDB::bind_method(D_METHOD("_on_Control_updated", "value"), &GradientPopup::_on_Control_updated);
	ClassDB::bind_method(D_METHOD("_on_GradientPopup_popup_hide"), &GradientPopup::_on_GradientPopup_popup_hide);
}
