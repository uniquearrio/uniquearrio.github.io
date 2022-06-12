import { createApp } from 'vue'
import App from './App.vue'
import router from './router'

import Bootstrap from 'bootstrap'
import 'bootstrap/dist/css/bootstrap.css'

createApp(App).use(router,Bootstrap).mount('#app')
