#pragma once

#include "Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager(){
        resource = new Resource();
    }
    ResourceManager(const ResourceManager& rm){
        resource = new Resource();
        *resource = *rm.resource;
    }
    ~ResourceManager(){
        delete resource;
    }

    double get(){
        return resource -> get();
    }

    private:
    Resource* resource = nullptr;
   
};
