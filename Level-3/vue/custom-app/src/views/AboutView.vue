<template>
  <div class="about">
    <h1 class="text-danger">This is an about page</h1>
    <PartFile parent="About Page"></PartFile>
  </div>
</template>

<script>
// @ is an alias to /src
import PartFile from '@/components/PartFile.vue'

export default {
  name: 'AboutView',
  components: {
    PartFile,
  }
}
</script>