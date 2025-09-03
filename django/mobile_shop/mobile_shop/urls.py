from django.urls import path, include
urlpatterns = [
    path('', include('all.urls')),
    # path('about/', include('about.urls')),
    # path('contact/', include('contact.urls')),
]