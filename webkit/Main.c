#include <gtk/gtk.h>
#include <webkit2/webkit2.h>
void init_gtk()
{
	GtkWidget *window;
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	WebKitWebView *webkit = WEBKIT_WEB_VIEW(webkit_web_view_new());
	webkit_web_view_load_uri(webkit, "https://www.google.co.jp");
	gtk_container_add(GTK_CONTAINER(window), GTK_WIDGET(webkit));
	 g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	 //return window;
	  gtk_widget_set_size_request(window, 500, 500);
	 	gtk_widget_show_all(window);
}
int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	init_gtk();
	gtk_main();
	return 0;
}

	