<template>
    <div>
        <h2>This is Shop Page</h2>
        
        <p><router-link :to= "{ name: 'shopdetail', params: {id: '1'}}">Item One</router-link> </p>
        <p><router-link :to= "{ name: 'shopdetail', params: { id: '2'}}">Item Two</router-link></p>
    </div>
</template>

<script>
import { response } from 'express';

    const axios = require('axios').default;
    export default{
    name: 'ShopView',
    data(){
        return{

        }
    },
    mounted(){
        this.getAllProducts();
    },
    methods:{
        getAllProducts(){
            axios.get('https://fkestoreapi.com/products')
            .then(response =>{
                console.log(response)
            })
        }
    }
    }
</script>

<style>
</style>
