const axios = require('axios')

const url = 'https://fakestoreapi.com/products/1';

axios.get(url).then(response =>
    {
        console.log("Data Fetched Sucesfully")
        console.log(response.data);
    }
    )
    .catch(reject => 
    {
        console.log("Error",reject.message);
    }
    );