"""mysite URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/3.0/topics/http/urls/
"""
from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    # This line is correct; it includes the URL patterns from the 'hello' app.
    path('', include('hello.urls')), 
    
    # Corrected paths without leading slashes.
    # To include the URLs from the 'about' app:
    # path('about/', include('about.urls')),
    
    # To include the URLs from the 'contact' app:
    # path('contact/', include('contact.urls')),

    # You can also include Django's built-in admin site:
    # path('admin/', admin.site.urls),
]