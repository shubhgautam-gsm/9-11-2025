# django framework/library((bscit(sem1(html,network,cf),sem2),bca(sem1,sem2))
from django.urls import path # django(science) bio,chem
# science.bio import corona  (science[folder] ,bio[file], corona[function])
from . import views

urlpatterns = [
    path('', views.index, name='index'),
]
