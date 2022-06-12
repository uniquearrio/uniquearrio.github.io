<template>
    <div>
        <h2>Contact Page</h2>
        <PartFile></PartFile>
    </div>
</template>
<script>
// @ is an alias to /src
import PartFile from '@/components/PartFile.vue'

export default {
  name: 'ContactView',
  components: {
    PartFile,
  }
}
</script>
