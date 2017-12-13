#include "toppingservice.h"

ToppingService::ToppingService()
{
    //ctor
}
vector<Topping> ToppingService::FillToppingsVectorFromTXTService()
{
  ToppingRepository toppingRepository;
  return toppingRepository.FillToppingsVectorFromTXT();
}
void ToppingService::storeAllToppingsToTXTservice(vector<Topping>& printTopping){
    ToppingRepository storeToTXT;
    storeToTXT.storeAllToppingsToTXT(printTopping);
}
vector<Topping> ToppingService::listAllToppings(){
    ToppingService service;
    return service.listAllToppings();
}
